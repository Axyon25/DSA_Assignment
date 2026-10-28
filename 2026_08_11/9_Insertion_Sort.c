#include <stdio.h>
int main()
{
    int arr[100], size, temp;

    printf("Enter the array size:- ");
    scanf("%d", &size);

    printf("Enter the array elements:- \n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=1; i<size; i++)
    {
        temp=arr[i];
        int min=i-1;

        while (min >= 0 && arr[min] > temp)
        {
            arr[min + 1] = arr[min];
            min--;
        }

        arr[min + 1] = temp;
    }

    printf("Sorted elements:- \n");
    for (int count = 0; count < size; count++)
    {
        printf("%d ", arr[count]);
    }

    return 0;
}