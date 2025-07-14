#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
int main()
{
    struct Node *head=(struct Node*)malloc(sizeof(struct Node));
    head->data=45;
    head->link=NULL;

    struct Node *ptr=head;
    ptr=add_to_end(ptr,55);
    ptr=add_to_end(ptr,65);
    ptr=add_to_end(ptr,75);

    ptr=head;

    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }

}
struct Node* add_to_end(struct Node *ptr,int data)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->link=NULL;

    ptr->link=temp;
    return temp;
};
