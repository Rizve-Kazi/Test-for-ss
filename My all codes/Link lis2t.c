#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int a[],int size);
int searchLinkedList(struct Node *head,int value);
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
    struct Node *current=head;
    printf("Index = %d\n",searchLinkedList(head,40));
}
int searchLinkedList(struct Node *head,int value)
{
    int index=1;
    while(head!=NULL)
    {
        if(head->data==value)
        {
            return index;
        }
        index++;
        head=head->next;
    }
    return -1;
}

struct Node *createLinkedList(int a[],int size)
{
    struct Node *head=NULL,*current=NULL,*temp=NULL;
    int i;
    for(i=0;i<size;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=a[i];
        temp->next;

        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current->next=current;
        }
    }
    return head;
};
