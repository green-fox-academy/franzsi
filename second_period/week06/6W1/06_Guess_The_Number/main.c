#include <stdio.h>

// Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8

int main()
{
    int a = 9;
    int b = 0;

    while (a != b){
        printf("Give your first try: \n");
        scanf("%d", &b);
        if(a == b){
            printf("Congrats, you found my number %d", a);
        } else if(b < a){
            printf("The store number is higher. \n");
        } else {
            printf("The store number is lower. \n");
        }
    }
    return 0;
}