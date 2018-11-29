#include <iostream>
#include <string>
#include <vector>

void appendA(std::vector<std::string> name);

int main(int argc, char* args[])
{
    std::vector<std::string> animals = {"bo", "anacond", "koal", "pand", "zebr"};
    appendA(animals);

    // Create a function called "appendA()" that adds "a" to every string in the "animals" list.
    // The parameter should be a vector.


    return 0;
}

void appendA(std::vector<std::string> name){

    for(int i=0; i < name.size();i++){
        std::cout << name[i] <<"a";
    }

}