#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// malloc() allocate the memory for 5 integers containing garbage values

int main()
{
    int *pointer = NULL;

    pointer = (int *) malloc(10 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        pointer[i] = i;
        printf("%d\n", pointer[i]);
    }

    for (int j = 0; j < 10; ++j) {
        printf("%d\n", pointer[j]);
    }

    free(pointer);
    return 0;
}


