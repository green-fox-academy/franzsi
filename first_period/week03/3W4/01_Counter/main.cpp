#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.

int factorial (int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial (n-1);
    }
}

int main() {
    std::cout << factorial(9) << std::endl;
    return 0;
}