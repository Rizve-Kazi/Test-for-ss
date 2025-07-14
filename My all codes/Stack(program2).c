#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_array[MAX];
int first=-1;

void push(int data)
{
    int i;
    first+=1;

    for(i=first;i>0;i--)
    {
        stack_array[i]=stack_array[i-1];
    }
    stack_array[0]=data;
}

int pop()
{
    int i,value;
    value=stack_array[0];

    for(i=0;i<=first;i++)
    {
        stack_array[i]=stack_array[i+1];
    }
    first-=1;
    return value;
}
void print_one()
{
    int i;
    if(first==-1)
    {
        printf("Stack is underflow\n");
        exit(1);
    }
    for(i=0;i<=first;i++)
    {
        printf("%d ",stack_array[i]);
    }
}
void print_two()
{
    int i;
    if(first==-1)
    {
        printf("Stack is underflow\n");
    }
    for(i=0;i<=first;i++)
    {
        printf("%d ",stack_array[i]);
    }
}
int main()
{
    int data;
    push(30);
    push(20);
    push(10);
    print_one();
    printf("\n");
    data=pop();
    print_two();
}
