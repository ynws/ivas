#include "StringUtility.h"
#include <sstream>

std::vector<std::string> StringUtility::SplitString(const std::string line, const char delm)
{
	std::vector<std::string> v;
	std::stringstream ss(line);
	std::string buffer;
	while (std::getline(ss, buffer, delm)) {
		v.push_back(buffer);
	}
	return v;
}
