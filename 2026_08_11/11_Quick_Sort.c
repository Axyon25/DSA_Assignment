#include <stdio.h>
void quickSort(int arr[], int min, int max)
{
    int pivot, pos, temp;

    if (min < max)
    {
        pivot = arr[max];
        pos = min - 1;

        for (int i=min; i<max; i++)
        {
            if (arr[i] < pivot)
            {
                pos++;

                temp = arr[pos];
                arr[pos] = arr[i];
                arr[i] = temp;
            }
        }

        temp = arr[pos + 1];
        arr[pos + 1] = arr[max];
        arr[max] = temp;

        int pivotIndex = pos + 1;

        quickSort(arr, min, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, max);
    }
}

int main()
{
    int arr[100], size;

    printf("Enter the array size:- ");
    scanf("%d", &size);

    printf("Enter the array elements:- \n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, size - 1);

    printf("Sorted elements:\n");
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}