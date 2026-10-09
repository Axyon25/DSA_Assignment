// Question 3 - Write a program to reverse an array

#include <stdio.h>

int main()
{
    int arr[100], n, temp;

    printf("Enter the size of array...");
    scanf("%d", &n);

    printf("Enter the elements...\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    printf("Array after reversing...\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}