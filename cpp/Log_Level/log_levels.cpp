#include <string>
#include <iostream>

namespace log_line {
    std::string message(std::string line) {
        // return the message
        return line.substr(line.find("]") + 3);
    }

    std::string log_level(std::string line) {
        return line.substr(1, line.find("]") - 1);
    }

    std::string reformat(std::string line) {
        // return the reformatted message
        /*std::string message = line.substr(line.find("]")+3);
        std::string level = line.substr(1, line.find("]") - 1);
        return(message + " (" + level + ")");*/

        return message(line) + " (" + log_level(line) + ")";
    }
}

int main() {

    std::cout << log_line::message("[ERROR]: Invalid operation") << std::endl;
    std::cout << log_line::message("[INFO]: Invalid operation") << std::endl;
    std::cout << log_line::message("[WARNING]: Invalid operation") << std::endl;

    std::cout << log_line::log_level("[ERROR]: Invalid operation") << std::endl;
    std::cout << log_line::log_level("[INFO]: Invalid operation") << std::endl;
    std::cout << log_line::log_level("[WARNING]: Invalid operation") << std::endl;

    std::cout << log_line::reformat("[ERROR]: Invalid operation") << std::endl;
    std::cout << log_line::reformat("[INFO]: Invalid operation") << std::endl;
    std::cout << log_line::reformat("[WARNING]: Invalid operation") << std::endl;

    return 0;
}
