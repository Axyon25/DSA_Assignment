/*Write a program in c to implement basic operators (push, pop, peek, isEmpty, isFull) of stack using array.*/

#include<stdio.h>
int main()
{
    int arr[100], size, top=-1, choice, element;

    printf("Enter the array size:- ");
    scanf("%d", & size);

    printf("Enter the array elements:- \n");

    for(int i=0; i<size; i++)
    {
        scanf("%d", & arr[i]);
        top++;
    }

    printf("\nStack Operations:- \n");
    printf("1. Push \n");
    printf("2. Pop \n");
    printf("3. Peek \n");
    printf("4. IsEmpty \n");
    printf("5. IsFull \n");
    printf("Enter your choice:- ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if (top==size-1)
            {
                printf("Stack is Full\n");
            }
            else
            {
                printf("Enter the element to push:- ");
                scanf("%d", & element);

                top++;
                arr[top] = element;

                printf("Element pushed successfully\n");
            }
            break;

        case 2:
            if (top==-1)
            {
                printf("Stack is Empty\n");
            }
            else
            {
                printf("Popped element:- %d\n", arr[top]);
                top--;
            }
            break;

        case 3:
            if (top==-1)
            {
                printf("Stack is Empty\n");
            }
            else
            {
                printf("Top element:- %d\n", arr[top]);
            }
            break;

        case 4:
            if (top==-1)
            {
                printf("Stack is Empty\n");
            }
            else
            {
                printf("Stack is not Empty\n");
            }
            break;

        case 5:
            if (top==size-1)
            {
                printf("Stack is Full\n");
            }
            else
            {
                printf("Stack is not Full\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}