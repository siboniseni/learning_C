#include <stdio.h>
#include <ctype.h>

//This program prints out letters of alphabet in lowercase & uppcase

int main()
{
    char alphabet;

    for (alphabet='a'; alphabet<='z'; alphabet++)
    {
        printf("%c %c\n", alphabet, toupper(alphabet));
    }

    return 0;
}
