#include<stdio.h>
int main()
{
    double sub,temp,coins =0.76;
int rem,divide;


temp=coins;


    rem  =temp/0.50;
     sub = temp-(0.50*rem);
    printf("%d\n",rem);

 temp = sub;
rem=temp/0.10;
sub=temp-(0.10*rem);
printf("%d\n",rem);

temp = sub;
rem=temp/0.03;
sub=temp-(0.03*rem);
printf("%d\n",rem);



}
