/*Write a program in c to implement basic operators (DeQueue) of Queue using array.*/

#include<stdio.h>

int main()
{
    int queue[100], size, front=0, rear=-1;

    printf("Enter the array size...: ");
    scanf("%d", &size);

    printf("Enter the array elements...:\n");

    for(int i=0; i<size; i++)
    {
        scanf("%d", &queue[i]);
        rear++;
    }

    if(front > rear)
    {
        printf("Queue is Empty...\n");
    }
    else
    {
        printf("Deleted element...: %d\n", queue[front]);
        front++;

        printf("Queue elements...:\n");

        for(int i=front; i<=rear; i++)
        {
            printf("%d, ", queue[i]);
        }
    }

    return 0;
}