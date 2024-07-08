#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

namespace atbash_cipher {
	std::string encode(const std::string& word);
	std::string decode(const std::string& word);
	char reverseChar(char c);
}

#endif // ATBASH_CIPHER_H
