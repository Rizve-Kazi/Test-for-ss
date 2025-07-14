#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_array[MAX];
int top=-1;

int main()
{
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data=pop();
    data=pop();
    print();
}
void push(int data)
{
    if(top==MAX-1)
    {
        printf("Stack is overflow\n");
        return;
    }
    top=top+1;
    stack_array[top]=data;

}
int pop()
{
    int value;
    if(top==-1)
    {
        printf("Stack is underflow\n");
        return;
    }
    value=stack_array[top];
    top=top-1;
    return value;
}
void print()
{
    int i;
    if(top==-1)
    {
        printf("Stack is underflow\n");
        return;
    }
    for(i=top;i>=0;i--)
    {
        printf("%d ",stack_array[i]);
    }
}
