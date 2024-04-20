#include "hexadecimal.h"

namespace hexadecimal {

	int convert(std::string hexaNum) {

		//save each char of the string in a vector
		std::vector<int> hexaVector;
		for (char c : hexaNum) {		
			if (isdigit(c)) 
				hexaVector.push_back(c - '0');
			else if (c >= 'a' && c <= 'f') 
				hexaVector.push_back(10 + (c - 'a'));			
		}

		int decimal = 0;
		int hexLength = hexaVector.size();

		//convert from hex to dec
		for (std::vector<char>::size_type i = 0; i < hexaVector.size(); i++) {
			hexLength--;
			decimal += hexaVector.at(i) * pow(16, hexLength);
		}
		return decimal;
	}
}  // namespace hexadecimal

int main() {

	std::string hexaNum = "ab123"; 
	std::cout << "Hexadecimal: " << hexaNum << std::endl;
	std::cout << "Decimal: " << hexadecimal::convert(hexaNum) << std::endl;

	return 0;
}
