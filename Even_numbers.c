#include <stdio.h>
/**
 *  This programm prints the Even numbers between 1 and 20
 * 
*/
int main()
{
    int x;
    
   for (x=1; x<=20; x++)
   {
       if ((x%2) == 0)
       {
           printf("%i\n", x );
       }
   }
   return 0;
}
