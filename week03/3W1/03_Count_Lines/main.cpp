#include <iostream>
#include <fstream>
#include <string>

/* int countLine(std::string filename);

int main () {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file
    std::string filename = {"my.txt"};
    std::cout <<countLine(filename);
}

int countLine(std::string filename)
{
    std::ifstream myFile("../" + filename);
    std::string line;
    int counter = 0;
    if(myFile.is_open()){
        while(getline(myFile, line))
            counter++;
    }else {
        return 0;
    }
    return counter;
} */


int main () {

    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory

    int counting(std::string myfile);
    std::string myfile = {"my-movies.txt"};
    std::cout << counting (myfile);

    std::ifstream myfile("../my-movies.txt");

    // myfile.open("../my-movies.txt");

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