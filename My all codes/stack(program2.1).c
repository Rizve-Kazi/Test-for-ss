#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_array[MAX];
int top=-1;

void push(int data)
{
    int i;
    top+=1;
    for(i=top;i>0;i--)
    {
        stack_array[i]=stack_array[i-1];
    }
    stack_array[0]=data;
}

int pop()
{
    int i,value;
    value=stack_array[0];
    for(i=0;i<top;i++)
    {
        stack_array[i]=stack_array[i+1];
    }
    top-=1;
    return value;
}
void prime_fact(int num)
{
    int i=2;
    while(num!=1)
    {
        while(num%i==0)
        {
            push(i);
            num=num/i;
        }
        i++;
    }
    while(top!=-1)
    {
        printf("%d ",pop());
    }

}
int main()
{
    int number;
    printf("Enter the number = ");
    scanf("%d",&number);
    prime_fact(number);
    return 0;
}
