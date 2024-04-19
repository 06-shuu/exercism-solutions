#if !defined(LUHN_H)
#define LUHN_H
#include<iostream>
#include<string>
#include <algorithm>
#include <ctype.h> 
#include <stdio.h> 
#include<vector>

namespace luhn {

	bool valid(std::string num);
}  // namespace luhn

#endif // LUHN_H