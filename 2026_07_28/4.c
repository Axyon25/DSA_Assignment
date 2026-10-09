// Question 4 - Binary Search

#include <stdio.h>

int main()
{
    int a[50],n,key;
    int low,high,mid;
    int flag=0;
    printf("Enter the no. of elements...");
    scanf("%d",&n);
    printf("Enter sorted elements...\n");
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched...");
    scanf("%d", &key);
    low=0;
    high=n-1;
    int i=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("Element found at position %d", mid+1);
            flag=1;
            break;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag==0)
    {
        printf("Element not found !!!");
    }
    return 0;
}