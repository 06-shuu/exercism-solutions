#include "luhn.h"


namespace luhn {

    bool valid(std::string num) {
        //to remove white space
        std::string num1 = num;
        num1.erase(std::remove_if(num1.begin(), num1.end(), isspace), num1.end());

        const char* characters_array = num1.c_str();
        std::vector<int> integers;

        int sum = 0;

        for (std::string::size_type i = 0; i < num1.length(); i++) {
            if ( num1.length() <= 16 || num1.length() > 1) {
            if (i % 2 == 0  ) {
                if (pow(characters_array[i], 2))
                    integers.push_back((pow(characters_array[i], 2) - 9) - '0');
                else
                    integers.push_back(pow(characters_array[i], 2 - '0'));
            }
           else
               integers.push_back(characters_array[i] - '0');
            }


            //if (i % 2 == 0)
            //    sum += pow(integers[i], 2);
            //else
            //    sum += integers[i];
        }

        if (sum % 10 == 0)
            return true;

        return false;
    }
}  // namespace luhn

int main() {

	luhn::valid("1 1 11");


	return 0;
}
