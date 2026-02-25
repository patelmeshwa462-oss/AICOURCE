#include <stdio.h>

struct interest
{
    float amount;
    float rate;
    float years;
};

int main()
{
    struct interest si;
    float simple_interest;

    printf("Enter Principal Amount: ");
    scanf("%f", &si.amount);

    printf("Enter Rate of Interest: ");
    scanf("%f", &si.rate);

    printf("Enter Number of Years: ");
    scanf("%f", &si.years);

  
    simple_interest = (si.amount * si.rate * si.years) / 100;

    printf("\nSimple Interest = %.2f\n", simple_interest);

    return 0;
}
