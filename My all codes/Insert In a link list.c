#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int a[],int size);
void printList(struct Node *head);
void insertAtBegaining(struct Node *head,int data);
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
    struct Node *newhead=head;
    printList(newhead);
    insertAtBegaining(head,450);
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
void insertAtBegaining(struct Node *head,int data)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;

    struct Node *newhead=temp;
    struct Node *current=NULL;


    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}
struct Node *createLinkedList(int a[],int size)
{
    struct Node *head=NULL,*current=NULL,*temp=NULL;
    int i;
    for(i=0;i<size;i++)
    {
         struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
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
