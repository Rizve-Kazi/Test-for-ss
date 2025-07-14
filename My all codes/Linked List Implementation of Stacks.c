#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};

*top=NULL;

void push(int data)
{
    struct Node *newHead=(struct Node*)malloc(sizeof(struct Node));
    if(newHead==NULL)
    {
        printf("Stack is overflow\n");
        exit(1);
    }
    newHead->data=data;
    newHead->link=NULL;
    newHead->link=top;
    top=newHead;
}
void print()
{
    struct Node *temp;
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
            printf("Enter the data for push = ");
            scanf("%d",&data);
            push(data);
            break;

        case 2:
            print();
            break;

        case 3:
            exit(1);

        default:
            printf("Wrong choice\n");
            break;
        }
    }
    return 0;
}
