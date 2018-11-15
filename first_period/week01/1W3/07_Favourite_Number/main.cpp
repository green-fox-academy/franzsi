#include <iostream>

int main(int argc, char* args[]) {

    // Store your favorite number in a variable (as an integer)
    // And print it like this: "My favorite number is: 8"

    int favnumber = 0;

    std::string question = "What is your favourite number?";
    std::cout << question << std::endl;
    std::cin >> favnumber;

    std::string answer = "My favourite number is: ";
    std::cout << answer << "";
    std::cout << favnumber;



    return 0;
}
