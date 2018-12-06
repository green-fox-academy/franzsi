#include <iostream>

#include "Card.h"
#include "ATM.h"

int main()
{
    Card card1(4752, 1000, 2020);
    Card card2(3214, 567, 2019);
    Card card3(3214, -456, 2020);
    Card card4(1925, -786, 2021);
    Card card5(2222, 5000, 2022);
    Card card6(5342, -1, 2019);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}