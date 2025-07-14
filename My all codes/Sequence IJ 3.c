#include<stdio.h>
int main()
{
    int i,number_one=7,number_two=9,number_three=11,number_four=13,number_five=15;

    for(int j=number_one; j>=number_one-2; j--)
    {
        printf("I=1 J=%d\n",j);
    }

    for(int j=number_two; j>=number_two-2; j--)
    {
        printf("I=3 J=%d\n",j);
    }

    for(int j=number_three; j>=number_three-2; j--)
    {
        printf("I=5 J=%d\n",j);
    }

    for(int j=number_four; j>=number_four-2; j--)
    {
        printf("I=7 J=%d\n",j);
    }

     for(int j=number_five;j>=number_five-2;j--)
   {
      printf("I=9 J=%d\n",j);
   }

   return 0;
}
