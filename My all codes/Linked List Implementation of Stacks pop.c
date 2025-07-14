#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
}*top=NULL;

int isEmpty()
{
    if(top==NULL)
        return 1;
    else
        return 0;
}
void push(int data)
{
    struct Node *newHead=(struct Node*)malloc(sizeof(struct Node));
    newHead->data=data;
    newHead->link=NULL;
    newHead->link=top;
    top=newHead;
}
int pop()
{
    struct Node *temp=top;
    int value=temp->data;
    top=top->link;
    free(temp);
    temp=NULL;
    return value;
}
int peek()
{
    if(isEmpty())
    {
        printf("Stack is underflow\n");
        exit(1);
    }
    return top->data;
}
void print()
{
    struct Node *temp;
    if(isEmpty())
    {
        printf("Stack is underflow\n");
        exit(1);
    }
    temp=top;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->link;
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
            printf("Enter the data = ");
            scanf("%d",&data);
            push(data);
            break;

        case 2:
            data=pop();
            printf("The deleted value = %d\n",data);
            break;

        case 3:
            printf("The topmost data = %d\n",peek());
            break;

        case 4:
            print();
            break;

        case 5:
            exit(1);

        default:
            printf("Wrong choice\n");
        }
    }
    return 0;

}
