#include <stdio.h>

/**
*
* This program takes an array_siza from the user 
*
* Outputs an array for thats size constisting of number 2 times greater than 
* the previous number. Starting from 1.
*/

int main() {
    
    int array_size;
    
    // prompts the user to enter array size that is > 0
    do 
    {
        printf("Enter array size: ");
        scanf("%i", &array_size);
    }
    while (array_size < 0);
    
    // makes sure array[0] == 1
    int first_array = 1;
    printf("%i, ",first_array );

    // prints out the rest of an array
    for (int i = 0; i < array_size; i++)
    {
        int next_array = first_array * 2;
        printf("%i ", next_array);
        first_array = next_array;
    }
    return 0;
}
