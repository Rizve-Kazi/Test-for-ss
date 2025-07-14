#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int stack_array[MAX];
int top=-1;

int isFull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
void push(int data)
{
    if(isFull())
    {
        printf("Stack is overflow\n");
        exit(1);
    }
    top++;
    stack_array[top]=data;
}
int pop()
{
    int value;

    if(isEmpty())
    {
        printf("Stack is underflow\n");
        exit(1);
    }
    value=stack_array[top];
    top--;
    return value;
}
void dec2bin(int n)
{
    while(n!=0)
    {
        push(n%2);
        n=n/2;
    }
}
void print()
{
    if(isEmpty())
    {
        printf("Stack is underflow\n");
        exit(1);
    }
    while(!isEmpty())
    {
        printf("%d",pop());
    }

}
int main()
{
    int dec;
    printf("Enter the dec = ");
    scanf("%d",&dec);
    dec2bin(dec);
    print();
    return 0;
}
