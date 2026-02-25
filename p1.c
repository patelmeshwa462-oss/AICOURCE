#include <stdio.h>
void add();  
int main()
{
    add();   
    return 0;
}
void add()
{
    int a, b, sum;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    sum = a + b;
    
    printf("Sum = %d", sum);
}
