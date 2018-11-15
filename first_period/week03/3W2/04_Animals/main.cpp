#include <iostream>
#include "Animals.h"


int main() {
    Animals riba ("50", "50");
    riba.Animals();

    Animals rece("50", "50");
    rece.Animals();

    riba.getInfo();
    rece.getInfo();

for (int i=0, i<10, i++) {
    riba.eat();
    rece.drink();

}
    riba.getInfo();
    rece.getInfo();

    return 0;
}