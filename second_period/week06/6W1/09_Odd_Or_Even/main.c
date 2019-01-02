#include <stdio.h>
#include <stdlib.h>

int isOdd(int number);

int number = 0;

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)

    printf("Give me a number: \n");
    scanf("%d", &number);

    int isOdd(int number)
    {
        if (number % 2 == 1) {
            printf("This number is odd \n");
            return 1;
        } else {
            printf("This number is odd \n");
            return 0;
        }
    }
}
