#include<stdio.h>
void square(int a)
{
    printf("Result = %d\n",a*a);
}
int main()
{
    int number;
    scanf("%d",&number);
    int result = square(number);
}
