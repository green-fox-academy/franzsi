#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string todoText = " - Buy milk\n";
    todoText.insert(0,"My todo:\n");
    todoText.append(" - Download games:\n\t");
    todoText.append(" - Diablo:\n\t");


    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indention

    // Expected outpt:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo


    std::cout << todoText << std::endl;


    return 0;
}

