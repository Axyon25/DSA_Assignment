#include<stdio.h>
int main()
{
    int arr [] = {80, 29, 18, 20, 33, 95, 78};
    int max = 7;
    int i, j, x;
    for (i = 0; i < max - 1; i++)
    {
        for (j = 0; j < max - 1 - i; j++)
        {

            if (arr [j] > arr [j + 1])
            {
                x = arr [j];
                arr [j] = arr [j + 1];
                arr [j + 1] = x;
            }
        }
    }
    printf("Sorted Array: ");
    for (i = 0; i < max; i++)
        printf("%d, ", arr [i]);
    return 0;
}