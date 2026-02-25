#include <stdio.h>

struct calculate
{
    int x;
    int y;
};

int main()
{
    
    struct calculate c ;

    int add, sub, mul;
    float div;

    
    add = c.x + c.y;
    sub = c.x - c.y;
    mul = c.x * c.y;
    div = (float)c.x / c.y;

   
   

    printf("\nAddition = %d\n", add);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division = %.2f\n", div);

    return 0;
}
