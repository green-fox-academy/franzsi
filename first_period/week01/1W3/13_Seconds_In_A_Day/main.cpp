#include <iostream>
using namespace std;

int main(int argc, char* args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    int remainingSeconds = (24 - currentHours)*360 + (60 - currentMinutes) * 60 + (60 - currentSeconds);

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    cout << remainingSeconds << endl;

    return 0;
}