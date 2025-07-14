#include<stdio.h>
int main()
{


float num1,num2;
char op;
printf("The operator (+,-,*,/) : ");
scanf("%c",&op);
printf("The two numbers are = ");
scanf("%f %f",&num1,&num2);


switch (op)

{

   case '+':
   {

   printf("%f + %f  = %f",num1,num2,num1+num2);

    break;
}
case'-':

  {
      printf("%f - %f = %f",num1,num2,num1-num2);
      break;
  }

case'*':
    {
        printf("%f * %f  = %f",num1,num2,num1*num2);
        break;
    }

  case'/':
  {

       printf("%f / %f  = %f",num1,num2,num1/num2);
       break;
  }

  default:
    printf("The number is invalid");

}

getch();

}










