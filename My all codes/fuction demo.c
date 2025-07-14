#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number = ");
    scanf("%d",&number);
    int result = fact(number);
    printf("The result is = %d\n",result);
}
 int fact(a)
 {
     if(a==1)
     {
         return 1;

     }
      else
      {
          return a*fact(a-1);
      }
 }
