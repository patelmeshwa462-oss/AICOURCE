#include <stdio.h>
int maximum(int x, int y);

int main()
{
    int a, b, result;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    result = maximum(a, b);   
    
    printf("Maximum number = %d", result);
    
    return 0;
}

int maximum(int x, int y)
{
    if(x > y)
        return x;
    else
        return y;
}
