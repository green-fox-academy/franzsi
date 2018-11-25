
#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it

    int km = 0;
    double miles = 1.609344;
    double distance = 0;
    std::cout << "Give me the distance: " << std::endl;
    std::cin >> km;
    distance = km * miles;
    std::cout << "The distance is " << distance << "Miles" << std::endl;


    return 0;
}