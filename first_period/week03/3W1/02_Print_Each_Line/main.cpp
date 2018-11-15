#include <iostream>
#include <fstream>
#include <string>


int main () {

    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory

    std::ifstream myfile("../my-file.txt");

   // myfile.open("../my-file.txt");
    if (myfile.is_open()) {
        std::cout << "All good." << std::endl;
    } else {
        std::cout << "Please open my-file.txt!" << std::endl;
    }
    std::string text;
    while (getline(myfile, text)) {
        std::cout << text << std::endl;
    }

    myfile.close();

return 0;
}