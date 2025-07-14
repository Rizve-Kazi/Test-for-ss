#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int a[],int size);
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
}
struct Node *createLinkedList(int a[],int size)
{
    struct
};
