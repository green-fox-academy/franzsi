#include <iostream>

// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).
// Odd - 2

int bunnyEars (int bunnyOdd, int bunnyEven) {
    if (bunnyOdd < 1) {
        return 0;
    } else

        return 2 + bunnyEars(bunnyOdd-1);
}

int main() {
    std::cout << bunnyEars(3) << std::endl;

    return 0;

}