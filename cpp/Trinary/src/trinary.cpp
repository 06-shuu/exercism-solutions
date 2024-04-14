#include "trinary.h"

namespace trinary {
	int trinary::to_decimal(std::string trinary) {
        int decimal{ 0 }, i{ 0 }, n{ static_cast<int>(trinary.length()) };

        //reverse the order of the number
        for (int i = 0; i < n / 2; i++) {
            std::swap(trinary[i], trinary[n - i - 1]);
        }

        //convert it to decimal
        for (auto num : trinary) {
            if (num >= '0' && num <= '2') {
                decimal += static_cast<int>((num - '0') * std::pow(3, i));
                ++i;
            }
            else
                return 0;
        }
        return decimal;
	}
}  // namespace trinary

int main() {
	std::string trinary1 = "1122000120";  
	std::cout <<trinary::to_decimal(trinary1) << std::endl;

    std::string trinary2 = "222";
    std::cout << trinary::to_decimal(trinary2) << std::endl;
	return 0;
}

