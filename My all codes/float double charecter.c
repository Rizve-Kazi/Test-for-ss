#include<stdio.h>
#include<math.h>
int main()
{

float marks;
printf("Marks =");
scanf("%f",&marks);

if(marks>100 || marks<0)
    printf("Invalid");

else if (marks>=80 && marks<=100)
    printf("A+");

else if (marks>=80 && marks<=100)
    printf("A+");

    else if (marks>=70 && marks<=79)
    printf("A");

    else if (marks>=60 && marks<=69)
    printf("A-");

    else if (marks>=50 && marks<=59)
    printf("B");

    else if (marks>=40 && marks<=49)
    printf("C");

    else if (marks>=33 && marks<=39)
    printf("D");

    else
        printf("Fail");
        getch();


}
