#include <iostream>
#include <string>
int main(int argc, char* args[]) {

    // Modify this program to greet user instead of the World!
    // The program should ask for the name of the user

    std::string username;
    std::cout << "Username:" << std::endl;

    std::cin >> username;

    std::cout << "Your Username is: " << username << std::endl;

    return 0;
}