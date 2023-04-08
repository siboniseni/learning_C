#include <stdio.h>

/**
 *  This programm prints the Even numbers between 1 and 20
 *  Using for loop 
*/

int main()
{
    int x;
    
   for (x = 1; x <= 20; x++) //for (i = 0; i <= 10; i = i + 2)
   {				// Easiest way to print out even numbers
       if ((x%2) == 0)
       {
           printf("%i\n", x );
       }
   }
   return 0;
}
