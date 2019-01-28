#include <stdio.h>

int sum(int firstNumber, int secondNumber); //def. function with 2 parameters

int main() {

    // Create a program which asks for two numbers and stores them
    // Create a function which takes two numbers as parameters
    // and returns 1 if the sum of the number of digits are equal and 0 otherwise
    //
    // For example:
    //
    // Case 1:
    //
    // a = 123
    // b = 321
    //
    // sum of number of digits (variable a) = 1 + 2 + 3 = 6
    // sum of number of digits (variable b) = 3 + 2 + 1 = 6
    // in this case the function should return 1
    //
    //
    // Case 2:
    //
    // a = 723
    // b = 114
    //
    // sum of number of digits (variable a) = 7 + 2 + 3 = 12
    // sum of number of digits (variable b) = 1 + 1 + 4 = 6
    // in this case the function should return 0

    int firstNumber = 0; //0-ról indul
    int secondNumber = 0;

    printf("Give me a number here: ");
    scanf("%d", &firstNumber);
    printf("Give me an other number here: ");
    scanf("%d", &secondNumber);

    sum(firstNumber, secondNumber); //function with 2 parameters

    return 0;
}

int sum(int firstNumber, int secondNumber) {

    int sumFirst = 0;
    int sumSecond = 0;

    while(firstNumber != 0) {

        sumFirst = sumFirst + firstNumber % 10;
        firstNumber = firstNumber / 10;
    }

    while(secondNumber != 0) {

        sumSecond = sumSecond + secondNumber % 10;
        secondNumber = secondNumber / 10;
    }

    if (sumFirst == sumSecond) {
        printf("Sum of digits are EQUAL!");
        return 1;
    } else {
        printf("Sum of digits are NOT EQUAL!");
        return 0;
    }

}
