#include<stdio.h>
int main()
{
    int number,rem,rem2,rem3;
    scanf("%d",&number);

   rem = number%10;// 123%10 = 3
   rem2 =((number-rem)/10)%10; // ((123-3)/10)%10 = 2
   rem3 =number/100;


    printf("%d\n",rem);
    printf("%d\n",rem2);
    printf("%d\n",rem3);

}
