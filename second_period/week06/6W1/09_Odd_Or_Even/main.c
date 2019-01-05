#include <stdio.h>
#include <stdlib.h>

int is_Odd(int number)
{
    if (number % 2 != 0) {
        printf("This number is odd. \n");
        return 1;
    } else {
        printf("This number is even. \n");
        return 0;
    }
}
int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)

    int i;
    printf("Give me a number: \n");
    scanf("%d", &i);
    printf("Your number is: %i \n" , i);

    is_Odd(i);

    return 0;

}
