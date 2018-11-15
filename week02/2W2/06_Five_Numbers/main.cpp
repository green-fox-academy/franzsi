#include <iostream>

int main() {

    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again



    int array[5];
    int *aPtr = nullptr;
    for (int i = 0; i < 5; i++) {
        std::cout << "Please give me your number:" << std::endl;
        std::cin >> array[i];
    }
    for (int d = 0; d < 5; d++) {
        aPtr = &array[d];
        std::cout << *aPtr << " ";
    }
    return 0;
}