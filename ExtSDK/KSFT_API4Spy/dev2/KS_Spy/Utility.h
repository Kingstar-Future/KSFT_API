#ifndef __KS_SPY_UTILITY_H__
#define __KS_SPY_UTILITY_H__

#pragma once
#include <vector>

extern size_t find_first_any_of_string( const std::string& str, const std::string& delim, size_t start_pos );
extern void fastsplit_string( std::vector<std::string>& ret, const std::string& str, const std::string& delim, bool bCompress = false );


#endif