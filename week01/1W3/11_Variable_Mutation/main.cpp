#include <iostream>

int main(int argc, char *args[]) {

    int a = 3;
    a += 10;

    // make the "a" variable's value bigger by 10

    std::cout << a << std::endl;

    int b = 100;
    b -= 7;
    // make b smaller by 7

    std::cout << b << std::endl;

    int c = 44;
    c *= 2;
    // please double c's value

    std::cout << c << std::endl;

    int d = 125;
    d /= 5;
    // please divide by 5 d's value

    std::cout << d << std::endl;

    int e = 8;
    e *= e;
    // please cube of e's value

    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 345;
    // tell if f1 is bigger than f2 (print as a boolean)

    if (f1 > f2) {
        std::cout << f1 << " bigger than " << f2 << std::endl;
    } else {
        std::cout << f1 << " smaller than " << f2 << std::endl;
    }

    int g1 = 350;
    int g2 = 200;
    // tell if the double of g2 is bigger than g1 (print as a boolean)

    if (g2 * 2 > g1) {
        std::cout << g2 * 2 << " bigger than " << g1 << std::endl;
    } else {
        std::cout << g2 * 2 << " smaller than " << g1 << std::endl;
    }

    int h = 135798745;
    // tell if it has 11 as a divisor (print as a boolean)
    std::cout << (h % 12 == 0 ? true : false) << std::endl;

    if (h % 100 == 0) {
        std::cout << true << std::endl;
    } else {
        std::cout << false << std::endl;
    }

    int i1 = 10;
    int i2 = 3;
    // tell if i1 is higher than i2 squared and smaller than i2 cubed (print as a boolean)

    std::cout << (i1 > (i2 * i2) ? true : false) << std::endl;


    int j = 1521;
    // tell if j is dividable by 3 or 5 (print as a boolean)

    std::cout << (j % 3 == 0 || j % 5 == 0 ? true : false) << std::endl;


    std::string k = "Apple";
    //fill the k variable with its content 4 times

    std::cout << k << std::endl;

    return 0;
}