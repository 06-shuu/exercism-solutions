#include "atbash_cipher.h"
namespace atbash_cipher {

    char reverseChar(char c) {
        if (c >= 'a' && c <= 'z') {
            return 'z' - (c - 'a');
        }
        else if (c >= 'A' && c <= 'Z') {
            return 'z' - (c - 'A');
        }
        else {
            return c;
        }
    }

    std::string encode(const std::string& input) {
        std::string filteredInput;
        std::copy_if(input.begin(), input.end(), std::back_inserter(filteredInput), [](char c) {
            return std::isalpha(c) || std::isdigit(c);
            });

        std::string output = filteredInput;
        std::transform(output.begin(), output.end(), output.begin(), [](char c) {
            return reverseChar(std::tolower(c));
            });

        for (size_t i = 5; i < output.length(); i += 6) {
            output.insert(i, " ");
        }

        return output;
    }

    std::string decode(const std::string& input) {
        std::string filteredInput;
        std::copy_if(input.begin(), input.end(), std::back_inserter(filteredInput), [](char c) {
            return std::isalpha(c) || std::isdigit(c);
            });

        std::string output = filteredInput;
        std::transform(output.begin(), output.end(), output.begin(), [](char c) {
            return reverseChar(std::tolower(c));
            });

        return output;
    }
}


int main() {

    std::cout << atbash_cipher::encode("The1112 quick brown fox jumps over the lazy dog") << std::endl;
    std::cout << atbash_cipher::decode("shumok h1") << std::endl;

    //

   /* std::cout << atbash_cipher::encode("yes") << std::endl;


    std::cout << atbash_cipher::decode("shumok h") << std::endl;

    std::cout <<  atbash_cipher::encode("The quick brown fox jumps over the lazy dog.") << std::endl;*/
    
	return 0;
}