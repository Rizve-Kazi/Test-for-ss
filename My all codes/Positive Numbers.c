#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,num6,sumOfNumPositive=0;
    scanf("%d",&num1);
     scanf("%d",&num2);
     scanf("%d",&num3);
     scanf("%d",&num4);
     scanf("%d",&num5);
     scanf("%d",&num6);

     if(num1<0 || num2<0 || num3<0 || num4<0 || num5<0 || num6<0)
     sumOfNumPositive++;

}
 printf("%d valores positivos",sumOfNumPositive);

return 0;

}
