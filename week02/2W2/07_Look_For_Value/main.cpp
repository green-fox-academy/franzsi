#include <iostream>


// Create a function which takes an array (and it's lenght) and a number as a parameter
// the function should return index where it found the given value
// if it can't find the number return 0


int main()
{
int index(int array [], int lenght, int number);
int array[9] = {1,2,69,96,32,66,18,33,9};

std::cout << index (array, 9, 7) << std::endl;
    return 0;
}