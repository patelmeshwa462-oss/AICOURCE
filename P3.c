#include <stdio.h>

float area();

int main()
{
    float result;
    
    result = area();   
    
    printf("Area of Circle = %.2f", result);
    
    return 0;
}


float area()
{
    float r, a;
    
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    
    a = 3.14 * r * r;
    
    return a;   
}
