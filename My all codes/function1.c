#include<stdio.h>
void sum(a,b,c)
{
  printf("The Sum = %d\n",a+b+c);
}
 int main()
 {
     int number_one,number_two,number_three;
     printf("Enter the three number = ");
     scanf("%d %d %d",&number_one,&number_two,&number_three);
     sum(number_one,number_two,number_three);
 }
