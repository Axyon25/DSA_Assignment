// Question 1 - Write a program to delete the nth element in an array

#include <stdio.h>
int main()
{
    int arr[100], n, size;

    printf("Enter size of array...");
    scanf("%d", &size);

    printf("Enter elements...\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete...");
    scanf("%d", &n);

    for(int i=n-1; i<size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    size--; 

    printf("Array after deletion...\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}