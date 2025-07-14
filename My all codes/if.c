#include<stdio.h>
int main()
{
    float marks;
    printf("Enter the marks = ");
    scanf("%f",&marks);

    if(marks>=80)
        printf("a+");

    else if(marks>=70)
        printf("a");

    else  if (marks>=60)
        printf("a-");

    else  if(marks>=50)
        printf("B");

    else if(marks>=40)
        printf("C");

    else  if(marks>=33)
        printf("D");

    else
        printf("fail");
    getch();






}
