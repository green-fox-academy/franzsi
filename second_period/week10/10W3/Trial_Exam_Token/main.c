#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <mem.h>

int main()
{
    /*
    There are some mistakes in the sentence below: some words start with capital letter, despite the fact
    that only the initial word should start with a capital letter.
    Print out the wrong words.
    Your program works as expected if you see this text on the console:

    Not
    Many

    Note that, strtok() is not neccessary to use and not always the best solution.
    */

    char text[] = "He said he was Not there yesterday; however, Many people saw him there.";
    char* token;
    int counter = 0;

    token = strtok (text, " ");

    while( token != NULL ) {
        if(isupper(token[0]) && counter != 0){
            printf( " %s\n", token );
        }

        token = strtok(NULL, " " );
        ++counter;
    }
    return 0;
}