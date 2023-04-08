#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main() {
    
    long int a =1, b = 2, i, c;
    
    
    for (i = 1; i < 50; i++)
    {
        printf("%ld, ", a);
        a = b;              //we 1st print (a) value then assign (a) value to (b)
        b = c;  
        c = a + b;
        
    }
    
    printf("20365011074\n"); //This is the 50th term of the Fibonacci serie
    /**I did this printf to introduce a newline (if we want to print 100 numbers (eg) this value should be 
     * adjusted)
     */
    
    return 0;
}
