#include <stdio.h>
void simpleInterest(float p, float r, float t);
int main()
{
    float principal, rate, time;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter Rate of interest: ");
    scanf("%f", &rate);
    
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    
    simpleInterest(principal, rate, time);
    
    return 0;
}

void simpleInterest(float p, float r, float t)
{
    float si;
    si = (p * r * t) / 100;
    
    printf("Simple Interest = %.2f", si);
}
