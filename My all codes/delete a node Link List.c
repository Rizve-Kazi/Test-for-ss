#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int arr[],int size);
void print(struct Node *head);
struct Node *delete(struct Node *head,int data);
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    int array[5]= {10,20,30,40,50};
    struct Node *head=NULL;
    head=createLinkedList(array,5);
    print(head);
    struct Node *newHead=delete(head,10);
    print(newHead);
}
void print(struct Node *head)
{
    struct Node *temp=head;
    while(temp->next!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
struct Node *delete(struct Node *head,int data)
{
    struct Node *dummyHead=(struct Node*)malloc(sizeof(struct Node));
    dummyHead->next=head;
    struct Node *temp=dummyHead;

    while(temp->next!=NULL)
    {
        if(temp->next->data==data)
        {
            temp->next=temp->next->next;
        }
        temp=temp->next;
    }
    return dummyHead->next;
};
struct Node *createLinkedList(int arr[],int size)
{
    struct Node *head=NULL,*temp=NULL,*current=NULL;
    int i;
    for(i=0; i<=size; i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=current->next;
        }
    }
    return head;
};
