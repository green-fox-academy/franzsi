#include <stdio.h>
#include <stdlib.h>

int equal(int number1, int number2);

int number1 = 0;
int number2 = 0;

int main()
{
    // Create a program which asks for two integers and stores them separatly
    // Create a function which takes two numbers as parameters and
    // returns 1 if they are equal and returns 0 otherwise

    printf("Give me a number: \n");
    scanf("%d", &number1);

    printf("Give me an other number: \n");
    scanf("%d", &number2);

    int equal(int number1, int number2)
    {
        if (number1 == number2) {
            printf("They are equal. \n");
            return 1;
        } else {
            printf("They are not equal. \n");
            return 0;
        }
    }
}