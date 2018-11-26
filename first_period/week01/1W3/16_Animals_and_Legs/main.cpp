#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have

    int chicken = 0;
    int pigs = 0;
    int legs = 0;

    std::cout << "How many chicken he has? " << std::endl;
    std::cin >> chicken;
    std::cout << "How many pigs he has? " << std::endl;
    std::cin >> pigs;
    legs = 2 * chicken + 4 * pigs;
    std::cout << "They have " << legs << " legs." << std::endl;





    return 0;
}