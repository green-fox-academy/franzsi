#include <stdio.h>
#include <stdlib.h>

int is_Equal(int number1, int number2)
{
    if (number1 == number2) {
        printf("They are equal. \n");
        return 1;

    } else {
        printf("They are not equal. \n");
        return 0;
    }
}

int main()
{
    // Create a program which asks for two integers and stores them separatly
    // Create a function which takes two numbers as parameters and
    // returns 1 if they are equal and returns 0 otherwise

    int a;
    int b;

    printf("Give me a number: \n");
    scanf("%d", &a);

    printf("Give me an other number: \n");
    scanf("%d", &b);

    (is_Equal(a, b));
    return 0;
}