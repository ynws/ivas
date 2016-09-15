#include "stdafx.h"
#include "StringUtility.h"

std::vector<std::string> StringUtility::SplitString(const std::string line, const char delm)
{
	auto ret = std::vector<std::string>();

	std::string::size_type pos = 0;
	while (pos != std::string::npos) {
		std::string::size_type p = line.find(delm, pos);

		if (p == std::string::npos) {
			ret.push_back(line.substr(pos));
			break;
		}
		else {
			ret.push_back(line.substr(pos, p - pos));
		}
		pos = p + 1;
	}
	return ret;
}
