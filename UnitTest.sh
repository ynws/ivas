#!/bin/sh

export PRJ=ivas

export GTEST=/usr/src/googletest-release-1.8.0
export GTLIB=${GTEST}/build/gtest
export GMLIB=${GTEST}/build/googlemock

mkdir build
cd build

echo "################################################################################"
echo "## BUILD"
echo "################################################################################"
g++ -std=c++11 -O -fno-exceptions -W -Wall -c ../Model/*.cpp \
    -DLINUX -fprofile-arcs -ftest-coverage
ar r libstatic.a *.o

echo "################################################################################"
echo "## BUILD TEST"
echo "################################################################################"
g++ -std=c++11 -O -fno-exceptions -W -Wall ../ModelTest/*.cpp \
    -DLINUX -fprofile-arcs -ftest-coverage -ftest-coverage \
    -I../Model libstatic.a \
    -I${GTEST}/googletest/include -I${GTEST}/googlemock/include \
    ${GMLIB}/gtest/libgtest.a ${GMLIB}/gtest/libgtest_main.a \
    ${GMLIB}/libgmock.a ${GMLIB}/libgmock_main.a \
    -lpthread -o test

echo "################################################################################"
echo "## RUN TEST"
echo "################################################################################"
./test --gtest_output=xml:testresult.xml

echo "################################################################################"
echo "## COVERAGE"
echo "################################################################################"
gcovr -r ~/workspace/${PRJ}/Model -e ../ModelTest/ --xml --output=Coverage.xml .
