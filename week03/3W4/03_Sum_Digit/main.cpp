#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

int factorial (int n) {

    if (n <= 0) {
        return 1;
    } else {
        return n + factorial(n-1);

    }
}

int main() {

    std::cout << factorial(3) << std::endl;
    return 0;
}