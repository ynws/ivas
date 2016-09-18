#!/bin/sh

export PRJ=IDOL_VERSUS
export RESULT=ModelCoverage.xml

# export GTEST=~/googletest-master # set at jenkins
export GTLIB=${GTEST}/build/gtest
export GMLIB=${GTEST}/build/googlemock

mkdir build
cd build

echo "################################################################################"
echo "## BUILD MODEL"
echo "################################################################################"
g++ -std=c++11 -O -fno-exceptions -W -Wall -c ../Model/*.cpp -DLINUX -fprofile-arcs -ftest-coverage
ar r libstatic.a *.o

echo "################################################################################"
echo "## BUILD TEST"
echo "################################################################################"
g++ -std=c++11 -O -fno-exceptions -W -Wall ../ModelTest/*.cpp -DLINUX -fprofile-arcs -ftest-coverage \
    -I../Model libstatic.a \
    -I${GTEST}/googletest/include ${GTLIB}/libgtest.a ${GTLIB}/libgtest_main.a \
    -I${GTEST}/googlemock/include ${GMLIB}/libgmock.a ${GMLIB}/libgmock_main.a \
    -lpthread -o test

echo "################################################################################"
echo "## RUN TEST"
echo "################################################################################"
./test

echo "################################################################################"
echo "## COVERAGE"
echo "################################################################################"
gcovr -r ~/jenkins/${PRJ}/Model --xml --output=${RESULT} .
vim -c %s/filename=\"/\\0Model\\//g -c x ${RESULT}

cp ${RESULT} /home/samba/jenkins/
