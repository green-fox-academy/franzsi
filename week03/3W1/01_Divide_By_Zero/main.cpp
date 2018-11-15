#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>



int main() {

    int divident;
    std::cout << "Give me the number!" << std::endl;
    std::cin >> divident;

    try {
        if (divident == 0) {
            throw std::string("Can't divide by 0");
        }
        std::cout << 10 / divident << std::endl;
    } catch (std::string exeption) {
        std::cout << "Fail!" << std::endl;
    }
    return 0;
}

/*
int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    return 0;
} */

