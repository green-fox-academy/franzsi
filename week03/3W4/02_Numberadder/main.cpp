#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int factorial (int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n + factorial (n-1);
    }
}

int main() {
    std::cout << factorial(3) << std::endl;

    return 0;
}