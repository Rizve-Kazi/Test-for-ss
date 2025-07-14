#include<stdio.h>
int main()
{
int loop, number,number1;
   int prime = 1;

   scanf("%d",&number);

   for(loop = 2; loop < number; loop++) {
 scanf("%d",&number1);
      if((number1 % loop) == 0) {
         prime = 0;
         if (prime == 1){
             printf("%d is prime number.", number1);
         }

   else{
     printf("%d is not a prime number.", number1);
   }

      }


   }

   return 0;


}


