#include <stdio.h>
#include <string.h>

int main()
{
    char catsName [50];
    char catsFood [25];
    char sentence[75] = "";

    puts ("What's the tiger sexy name? ");
    gets (catsName);

    puts ("What does he eat? ");
    gets (catsFood);

    strcat(sentence, catsName);
    strcat(sentence, " loves to eat ");
    strcat (sentence, catsFood);

    puts(sentence);
    return 0;
}