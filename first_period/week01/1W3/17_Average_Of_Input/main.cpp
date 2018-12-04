#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    int a =0;
    int b =0;
    int c =0;
    int d = 0;
    int e = 0;
    int sum =0;
    float av =0 ;

    std::cout << "Give me your 5 numbers: " << std::endl;
    std::cin >> a >> b >> c >> d >> e;

    sum = a+b+c+d+e;
    av = sum/5;

    std::cout << "They sum is: " << sum << std::endl;
    std::cout << "They average is: " << av << std::endl;
    return 0;
}

