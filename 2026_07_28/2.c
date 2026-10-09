// Question 2 - Write a program to insert an element in an array

#include <stdio.h>

int main()
{
    int arr[100], size, pos, val;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert...");
    scanf("%d", &pos);

    printf("Enter value to insert...");
    scanf("%d", &val);

    for(int i = size; i>=pos; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=val;
    size++;

    printf("Array after insertion...\n");
    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}