#include <gtest/gtest.h>
#include "StringUtility.h"

TEST(StringUtilityTest, Split1) {
	std::vector<std::string> data = StringUtility::SplitString("a,b,c");
	ASSERT_EQ(data.size(), 3);
	ASSERT_EQ(data[0], "a");
	ASSERT_EQ(data[1], "b");
	ASSERT_EQ(data[2], "c");
}

TEST(StringUtilityTest, Split2) {
	std::vector<std::string> data = StringUtility::SplitString("a#b#c");
	ASSERT_EQ(data.size(), 1);
	ASSERT_EQ(data[0], "a#b#c");
}

TEST(StringUtilityTest, Split3) {
	std::vector<std::string> data = StringUtility::SplitString("a#b#c", '#');
	ASSERT_EQ(data.size(), 3);
	ASSERT_EQ(data[0], "a");
	ASSERT_EQ(data[1], "b");
	ASSERT_EQ(data[2], "c");
}

