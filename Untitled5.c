#include <stdio.h>
void sumArray(int arr[], int n);
int main()
{
    int arr[100], n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    sumArray(arr, n);  
    
    return 0;
}

void sumArray(int arr[], int n)
{
    int i, sum = 0;
    
    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    
    printf("Sum of array elements = %d", sum);
}
