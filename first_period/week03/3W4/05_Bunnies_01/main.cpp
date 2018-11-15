#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

int bunnyEars(int bunny) {
    if (bunny < 1) {
        return 0;
    } else
        return 2 + bunnyEars(bunny - 1);
}

int main() {
    std::cout << bunnyEars(3) << std::endl;
    return 0;
}

