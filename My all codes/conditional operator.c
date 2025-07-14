#include<stdio.h>
int main()
{

    int num1,num2,Large;
    printf("The two numbers = ");
    scanf("&d  &d",&num1,&num2);

    Large = ((num1>num2) ? num1 : num2);

    printf("%d\n",Large);
    getch();



}
