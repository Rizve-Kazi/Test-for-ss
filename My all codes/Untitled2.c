#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
    int data;
    struct Node *link;
}

*top=NULL;

int isEmpty()
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
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
void palindrome_check(char *s)
{
    int i=0;
    while(s[i]!='X')
    {
        push(s[i]);
        i++;
    }
    i++;
    while(s[i])
    {
        if(isEmpty() || s[i]!=pop())
        {
            printf("Not a palindrome\n");
            exit(1);
        }
        i++;
    }
    if(isEmpty())
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }
}
int main()
{
    char name[100];
    printf("Enter your string = ");
    scanf("%s",&name);

    palindrome_check(name);
    return 0;
}
