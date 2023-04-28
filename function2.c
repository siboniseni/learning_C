#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(double first_side, double sec_side, double third_side);

int main() {
    
    double first_side, sec_side, third_side;
    
    printf ("Enter the First side : ");
    scanf("%lf", &first_side);
   
   printf ("Enter the Second side : ");
   scanf("%lf", &sec_side);
   
   printf ("Enter the Third side : ");
   scanf("%lf", &third_side);
   
   bool valid = valid_triangle(first_side, sec_side, third_side);
   
   printf("%i", valid);

return valid_triangle;
}

 bool valid_triangle(double first_side, double sec_side, double third_side)
    {
        if (first_side > 0 & sec_side > 0 & third_side > 0)
        {
            if (third_side < sec_side + sec_side)
            {
                printf("TRUE");
            }
        }
        else
        {
            printf("FALSE");
        }
    }
