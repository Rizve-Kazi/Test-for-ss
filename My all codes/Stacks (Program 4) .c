#include<stdio.h>
#include<stdio.h>
struct Node
{
    int data;
    struct Node *link;
};
int isEmpty(struct Node *top)
{
    if(top==NULL)
        return 1;
    else
        return 0;
}
void *push(int data,struct Node **top1)
{
    struct Node *newHead=(struct Node*)malloc(sizeof(struct Node));
    if(newHead==NULL)
    {
        printf("Stack is underflow\n");
        exit(1);
    }
    newHead->data=data;
    newHead->link=NULL;
    newHead->link=*top1;
    *top1=newHead;
}
int *pop(struct Node **top)
{
    struct Node *temp;
    int value;
    if(isEmpty(top))
    {
        printf("Stack is underflow\n");
        exit(1);
    }
    temp=*top;
    value=temp->data;
    *top=(*top)->link;
    free(temp);
    temp=NULL;
    return value;
}
void print(struct Node **top)
{
    struct Node *temp;
    if(isEmpty(top))
    {
        printf("Stack is underflow\n");
        exit(1);
    }
    temp=*top;
    printf("Stack element's are : ");
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
int main()
{
    int data;
    struct Node *top=NULL;
    struct Node *top1=NULL;
    struct Node *top2=NULL;

        push(1,&top);
        push(2,&top);
        push(3,&top);

        data=pop(&top);
        push(data,&top1);
        data=pop(&top);
        push(data,&top1);
        data=pop(&top);
        push(data,&top1);
        print(&top);
        print(&top1);

        data=pop(&top1);
        push(data,&top2);
        data=pop(&top1);
        push(data,&top2);
        data=pop(&top1);
        push(data,&top2);
        print(&top1);
        print(&top2);

        data=pop(&top2);
        push(data,&top);
        data=pop(&top2);
        push(data,&top);
        data=pop(&top2);
        push(data,&top);
        print(&top2);
        print(&top);
}
