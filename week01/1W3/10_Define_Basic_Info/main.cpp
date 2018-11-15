#include <iostream>

int main(int argc, char *args[]) {

    // Define several things as a variable then print their values
    // Your name as a string
    // Your age as an integer
    // Your height in meters as a double
    // Whether you are married or not as a boolean


    std::string name = "Frankó Zsuzsi";
    int age = 1;
    double height = 1.60;
    bool married = true;

    std::cout << "My name is " << name << "." << std::endl;
    std::cout << "I am " << age << "years old." << std::endl;
    std::cout << "I am " << height << " meter tall." << std::endl;

    if (married) {

        std::cout << "Keep going." << std::endl;
    } else {

        std::cout << "Let' s drink something strong." << std::endl;
    }
    return 0;
}
