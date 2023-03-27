#include <stdio.h>

//This program will take a value and determine if 
//its an Even or Odd number


int main() {

    int n, x;
    
    printf("Enter a value: %d", n);
    scanf("%d", &n);
    
    x = n % 2;
    
    if (x == 0)
    {
        printf("%d is an Even number.", n);
    }
    else if (x != 0)
    {
        printf("%d is an Odd number.", n);
    }
    else 
    {
        printf("%d is zero.", n);
    }
    
    return 0;
}
