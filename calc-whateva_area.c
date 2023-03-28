#include <stdio.h>
#include <math.h>
/**C program to find the area of a triangle whose three sides are given 
 * This program will calc Area of a triangle EVEN if given invalid number(sides)
 */
//area = square root s(s-a)(s-b)(s-c)
//a,b,c are sides of a triangle
//s is a semi-perimeter and = (a+b+c) / 2

int main()
{
    float a, b, c, s, x, y, areaN, areaP;
    
    printf("Enter side a: ");
    scanf("%f", &a);
    
    printf("Enter side b: ");
    scanf("%f", &b);
    
    printf("Enter side c: ");
    scanf("%f", &c);
        
        s = (a + b + c) / 2;
        
        x = (s * (s-a) * (s-b) * (s-c));
        
        y = x * (-1);     //if x < 0, this will make it + so we can get square root
        
        areaN = sqrt(y);   
        areaP = sqrt(x); //if x is + we proceed to calc area NORMALLY. 
        
        if (x < 0)
        {
            printf("Check if you entered correct values\nThe area (PSEUDO) = %.2f", areaN);
        }
        else if (x == 0) 
        {
            printf("Area = 0.00");
        }
        else
        {
            printf("Area = %.2f", areaP);
        }
  return 0;
}
