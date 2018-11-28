#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *args[]) {

    int num, fact = 1;
    cout << "Enter a number";
    cin >> num;

    if (num > 0) {
        for (int i = 1; i <= num; i++) {
            fact = fact * i;}

            // if num = 5
            // fact = 1*1 (= 1)
            // fact = 1*2 (= 2)
            // fact = 2*3 (= 6)
            // fact = 6*4  (= 24)
            // fact = 24*5 (=120)

        std::cout << "Factorial of a number is " << fact << endl;

        }else if (num == 0) {

            std::cout << "Factorial of a zero 1." << endl;

        } else if (num < 0) {

            std::cout << "Factorial of a negative number does not exist." << endl;
        }



    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.


    return 0;
}