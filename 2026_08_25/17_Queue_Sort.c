/*Write a program in c to implement basic operators (enqueue, dequeue, display, isEmpty, isFull) of Queue using array.*/

#include<stdio.h>
int main()
{
    int queue[100], size;
    int front=-1, rear=-1;
    int choice, ele;

    printf("Enter the array size...: ");
    scanf("%d", &size);

    while (1)
    {
        printf("\nQueue Operations...\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. isEmpty\n");
        printf("5. isFull\n");
        printf("6. Exit\n");

        printf("Enter your choice...: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if(rear == size-1)
                {
                    printf("Queue is Full...\n");
                }
                else
                {
                    printf("Enter the element...: ");
                    scanf("%d", &ele);

                    if(front == -1)
                    {
                        front = 0;
                    }

                    rear++;
                    queue[rear] = ele;

                    printf("Element inserted successfully...\n");
                }
                break;

            case 2:
                if(front == -1 || front>rear)
                {
                    printf("Queue is Empty...\n");
                }
                else
                {
                    printf("Deleted element...: %d\n", queue[front]);
                    front++;

                    if(front>rear)
                    {
                        front = -1;
                        rear = -1;
                    }
                }
                break;

            case 3:
                if(front == -1)
                {
                    printf("Queue is Empty...\n");
                }
                else
                {
                    printf("Queue elements...:\n");

                    for(int i=front; i<=rear; i++)
                    {
                        printf("%d, ", queue[i]);
                    }

                    printf("\n");
                }
                break;

            case 4:
                if(front == -1)
                {
                    printf("Queue is Empty...\n");
                }
                else
                {
                    printf("Queue is Not Empty...\n");
                }
                break;

            case 5:
                if(rear == size-1)
                {
                    printf("Queue is Full...\n");
                }
                else
                {
                    printf("Queue is Not Full...\n");
                }
                break;

            case 6:
                printf("Program terminated...\n");
                return 0;

            default:
                printf("Invalid choice...\n");
        }
    }

    return 0;
}