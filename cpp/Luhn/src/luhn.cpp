#include "luhn.h"


namespace luhn {

    bool valid(std::string num) {
        num.erase(std::remove_if(num.begin(), num.end(), [](char c) { return std::isspace(c); }), num.end()); //erase whitespaces 

        if (num.length() == 1)
            return false;
        std::vector<char> charVec;
        for (char c : num) {
            if (isdigit(c))
                charVec.push_back(c); 
            else return false;
        }

        int sum = 0;
        int digit;
        int position = 0;
        for (std::vector<char>::size_type i = charVec.size(); i > 0; i--) {
            digit = charVec.at(i - 1) - '0';
            if (position % 2 != 0) {
                digit = digit > 4 ? digit * 2 - 9 : digit * 2;
            }
            sum += digit;
            position++;
        }

        return sum % 10 == 0;
    }
}  // namespace luhn

int main() {

	
	std::cout << luhn::valid("4539 3195 0343 6467") << std::endl;

	return 0;
}
