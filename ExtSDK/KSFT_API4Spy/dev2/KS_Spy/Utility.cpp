#include "stdafx.h"

#include "Utility.h"


size_t find_first_any_of_string( const std::string& str, const std::string& delim, size_t start_pos )
{
	size_t pos = start_pos, len = str.size();
	const char *p = str.c_str() + pos;
	while (pos < len)
	{
		for(size_t i = 0, size = delim.length(); i < size; ++i)
			if (*p == delim[i]) return pos;
		p++;
		pos++;
	}
	return std::string::npos;
}

void fastsplit_string( std::vector<std::string>& ret, const std::string& str, const std::string& delim, bool bCompress)
{
	ret.clear();
	size_t last = 0;
	size_t index = ::find_first_any_of_string(str, delim, 0);
	while (index != std::string::npos)
	{
		if (!bCompress || index - last) ret.push_back(str.substr(last, index - last));
		last = index + 1;
		index = ::find_first_any_of_string(str, delim, last);
	}
	if (str.size() > last) ret.push_back(str.substr(last));
}

