#include <stdio.h>

// Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    int surface = (a * b + b * c + a * c) * 2;
    int volume = a * b * c;

    printf("Give first side of the cube \n");
    scanf("%d", &a);

    printf("Give the second side of the cube \n");
    scanf("%d", &b);

    printf("Give the last side of the cube \n");
    scanf("%d", &c);

    printf("Cuboid surface size: %d\n", surface);
    printf("Cuboid volume size: %d\n", volume);

    return 0;

}