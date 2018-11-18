
#include <iostream>

int main(int argc, char* args[]) {
    double a = 0;
    double b = 0;
    double c = 0;


    std::cout<<"Give first side of the cube " ; std::cin >> a;
    std::cout<<"Give the second side of the cube " ; std::cin >> b;
    std::cout<<"Give the last side of the cube " ; std::cin >> c;


    double surface = ( a * b + b * c + a * c ) * 2;
    double volume = a*b*c;

    std::cout << "Cuboid surface size: " << surface << std::endl;
    std::cout << "Cuboid volume size: " << volume << std::endl;


    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    return 0;
}