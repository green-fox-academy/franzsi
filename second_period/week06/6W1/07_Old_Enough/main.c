#include <stdio.h>
#include <stdlib.h>

// Create a program which asks for the age of the user and stores it
// Create a function which takes that age as a parameter and returns if the user is
// old enough to buy himself alcohol in Hungary

int main()
{
    void oldEnoughAge(int age);
    int age = 0;

    printf("How old are you? \n");
    scanf("%d", &age);

    oldEnoughAge(age);
    return 0;
}

    void oldEnoughAge(int age){

        if (age < 18) {
            printf("We are sorry, your age is under 18, stay sober! \n");
        } else {
            printf("You can drink like a pig! \n");
        }
    }


