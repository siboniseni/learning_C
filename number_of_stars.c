#include <stdio.h>
/**
 *
 * This program will print outout:
 *     
 *      0
 *      1 *
 *      2 * *
 *      3 * * *
 *      4 * * * *
 *      5 * * * * *
 * 
 * followed by a newline
 * 
*/
int main () {

    int a, b;
    
    for (a = 0; a < 6; a++)
        {
            printf("%d ", a);
            
            for (b = 1; b <= a; b++)
            {
                printf("* ");
            }
            
             printf("\n");
        }
    
     return 0;
}
