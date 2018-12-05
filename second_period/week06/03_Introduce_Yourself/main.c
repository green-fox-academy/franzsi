#include<stdio.h>

int main() {
    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Use variables to store the informations!
    //
    //  Example output:
    //  John Doe
    //  31
    //  1.87

    char name[10] = "abdefgijk";
    int age = 0;
    float height = 0;

    printf("What is your name?\n");
    scanf("%s", name);

    printf("Wow! Such a nice name %s!\n", name);

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Wow! You are really just %d years old?", age);

    printf("How tall are you?\n");
    scanf("%.2f", height);

    printf("Wow! You are really just %.2f cm tall?", height);

    return 0;
}