#include <stdio.h>
#include <ctype.h>

//This program prints alphabets in lower and uppercase using while loop

int main()
{
    char alphabet = 'a';
    
    while (alphabet<='z') 
    {
        printf("%c %c\n", alphabet, toupper(alphabet));
        alphabet++;
    }
    return 0;
}
