#include<stdio.h>
#include<stdlib.h>
#define MAX 5

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

int print()
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
    push(50);
    push(40);
    push(30);
    push(20);
    push(10);
    print();
}
