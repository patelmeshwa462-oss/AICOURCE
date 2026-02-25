#include<stdio.h>

int findMax(int arr[], int n);

int main()
{
    int arr[100], n, i, max;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max = findMax(arr, n);   
    
    printf("Maximum element = %d", max);
    
    return 0;
}

int findMax(int arr[], int n)
{
    int i, max = arr[0];
    
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    
    return max;
}
