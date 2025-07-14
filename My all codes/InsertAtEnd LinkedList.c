#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int a[],int size);
void printList(struct Node *head);
void insertAtEnd(struct Node *head,int data);
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    int arr[5]={10,20,30,40,50};
    struct Node *head=NULL;
    head=createLinkedList(arr,5);
    printList(head);
    insertAtEnd(head,250);
}
void printList(struct Node *head)
{
    struct Node *current;

    while(current!=NULL)
    {
        printf("%d->",current->data);
        current=current->next;
    }
    printf("NULL\n");
}
void insertAtEnd(struct Node *head,int data)
{
    struct Node *current=head;
    while(current->next!=NULL)
    {
        current=current->next;
    }

    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;

    current->next=temp;

    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}
struct Node *createLinkedList(int a[],int size)
{
    struct Node *head=NULL,*temp=NULL,*current=NULL;
    int i;
    for(i=0;i<size;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=a[i];
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
