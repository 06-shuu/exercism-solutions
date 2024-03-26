
#include "raindrops.h"
#include<iostream>

namespace raindrops {
	std::string raindrops::convert(int number) {
        std::string rainDropSound = "";
        if (number % 3 == 0)
            rainDropSound += "Pling";
        if (number % 5 == 0)
            rainDropSound += "Plang";
        if (number % 7 == 0)
            rainDropSound += "Plong";
        if (rainDropSound.empty())
            return std::to_string(number);
        else
            return rainDropSound;
	}
	
}  // namespace raindrops


int main() {

	std::cout << raindrops::convert(28) << std::endl;
	std::cout << raindrops::convert(30) << std::endl;
	std::cout << raindrops::convert(34) << std::endl;

	return 0; 
}