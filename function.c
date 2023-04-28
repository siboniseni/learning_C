#include <stdio.h>

int add_two_int(int x, int y);

int main() {
    int x, y;
    
    printf("Enter x: ");
    scanf("%i", &x);
    
    printf("Enter x: ");
    scanf("%i", &y);
    
    int z = add_two_int(x, y);
    
    printf("sum = %i", z);
    return 0;
}

 int add_two_int(int x, int y)
    {
        int sum = x + y;
        return sum;
    }
