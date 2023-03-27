#include <stdio.h>

//This program will take a value and determine if 
//its an Even or Odd number
//Does not take negative values


int main() {

    int n = 0, x;
    
    printf("Enter a value: ");
    scanf("%d", &n);
    
    x = n % 2;
    
    if (x == 0 & n > 0)
    {
        printf("%d is an Even number.", n);
    }
    else if (n < 0)
    {
        printf("Enter positive numbers only!");
    }
    else if (n != 0)
    {
        printf("%d is an Odd number.", n);
    }
    else 
    {
        printf("In mathematics zero is considered an Even number.");
    }
    
    return 0;
}
