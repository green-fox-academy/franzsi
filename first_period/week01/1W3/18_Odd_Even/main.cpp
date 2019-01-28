#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.

    int a = 0;
    std::cout << "Gimme a number:" << std::endl;
    std::cin >> a;

    std::cout << (a % 2 == 1 ? "This number is odd." : "This number is even.") << std::endl;

    return 0;
}