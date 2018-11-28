#include <iostream>
#include <string>

using namespace std;

// - Create a function called `factorio`
//   it should calculate its input's factorial.
//   it should not return it, but take an additional integer parameter and overwrite its value.

int factorio(int number){
    int product = 1;
    for(int i = 1; i <= number; i++)
        product *= i;
    return product;
}

int main() {
    int baseNum = 10;
    std::cout << factorio(baseNum) << std::endl;
    return 0;
}