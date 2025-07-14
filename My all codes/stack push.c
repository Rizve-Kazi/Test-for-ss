#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_array[MAX];
int top=-1;

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
}

void push(int data)
{
    if(top==MAX-1)
    {
        printf("Stack is Full\n");
    }

    top=top+1;
    stack_array[top]=data;
}
