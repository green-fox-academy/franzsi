#include <stdio.h>
#include <stdlib.h>



// Prompt the user to enter a number. This number will be X.
// Allocate memory for X numbers and prompt the user to enter X numbers.
// Allocate memory for the sum of the X numbers(Y) in the same array
// Fill the array with numbers from 1 to Y, then print them

int main()
{
    puts("Please enter a number:");
    int X = 0;
    scanf("%d", &X);

   // int* pointer = NULL;


    int *pointer = NULL;

    pointer = (int *) calloc(X , sizeof(int));


    for (int i = 0, i <0, i++ );



    printf("Hello, World!\n");
    return 0;
}