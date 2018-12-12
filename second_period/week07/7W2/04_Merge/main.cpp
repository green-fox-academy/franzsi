#include <iostream>
#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

//void push_back();

int main()
{
    int size = 10;
    int *odd = NULL;
    int *even = NULL;

    odd = (int *) malloc(size * sizeof(int));
    even = (int *) malloc(size * sizeof(int));


    for (int i = 0; i < size; i++) {
        odd[i] = 2 * i + 1;
        even[i] = 2 * i + 2;
        //printf("%d\n", odd[i]);
        //printf("%d\n", even[i]);
    }

    odd = (int *) realloc(odd, 2 * size * sizeof(int));

    for (int i = 0; i < size; i++) {
        odd[i + size] = even[i];
    }

    for (int i = 0; i < 2 * size; i++) {
        for (int j = i; j < 2 * size; j++) {
            if (odd[i] < odd[j]) {
                int David = odd[i];
                odd[i] = odd[j];
                odd[j] = David;
            }
        }
    }
    for (int i = 0; i < 2 * size; i++) {
        printf("%d\n", odd[i]);
    }

    realloc(even, 0);
    return 0;
}