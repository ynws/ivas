#pragma once
#include <string>
#include <vector>
class StringUtility
{
public:
	static std::vector<std::string> SplitString(const std::string line, const char delm = ',');
};

