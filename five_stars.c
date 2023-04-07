#include <stdio.h>

/**
 *  This programm prints out five stars followed by a newline 10 times
 *  Learning NESTED LOOPS
*/

int main()

{
  int n, i;
  
  for (i = 1; i <= 10; i++)
  {
         for (n = 1; n <= 5; n++)
         {
              printf("*");
         }
  
	 printf("\n");
  }
   
  return 0;
}
