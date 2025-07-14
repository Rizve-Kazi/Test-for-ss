#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int a[],int size);
void printList(struct Node *head);
void insert(struct Node *head,int position,int value);
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
    insert(head,3,888);

}
void printList(struct Node *head)
{
    struct Node *temp=head;

    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void insert(struct Node *head,int position,int value)
{
    struct Node *temp=head;

    int count=0;

    while(temp!=NULL)
    {
        count++;

        if(count==position)
        {
            struct Node *newMode=(struct Node*)malloc(sizeof(struct Node));
            newMode->data=value;
            newMode->next=temp->next;
            temp->next=newMode;
        }
        temp=temp->next;
    }
    printList(head);
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
