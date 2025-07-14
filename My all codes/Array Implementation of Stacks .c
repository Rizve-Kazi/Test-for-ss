#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_array[MAX];
int top=-1;

int isFull()
{
    if(top==MAX-1)
        return 1;

    else
        return 0;
}

int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
void push(int data)
{
    if(isFull())
    {
        printf("Stack is overflow\n");
        exit(1);
    }
    top=top+1;
    stack_array[top]=data;
}
int pop()
{
    int value;

    if(top==-1)
    {
        printf("Stack is underflow\n");
    }
    value=stack_array[top];
    top=top-1;
    return value;
}
int peak()
{
    if(isEmpty())
    {
        printf("Stack is underflow\n");
        exit(1);
    }
    return stack_array[top];
}

int print()
{
    int i;

    if(top==-1)
    {
        printf("Stack is underflow\n");
    }
    for(i=0; i<=top; i++)
    {
        printf("%d ",stack_array[i]);
    }
    printf("\n");
}
int main()
{
    int choice,data;

    while(1)
    {
        printf("Enter the choice = ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Enter the data for pushed = ");
            scanf("%d",&data);
            printf("The element of the stack = %d\n",data);
            break;

        case 2:
            data=pop();
            printf("The topmost element = %d\n",peak());
            printf("\n");
            break;

        case 3:
            printf("The deleted element = %d\n",data);
            break;

        case 4:
            print();
            break;

        case 5:
            exit(1);

            default:
            printf("The wrong choice\n");
        }
    }
}
