#include<stdio.h>
int main()
{
    int number,rem,tem,range;
    scanf("%d",&range);


    for(int i=1; i<=range; i++)
    {

        scanf("%d",&number);
        int sum = 0;

        tem = number/10;
        rem = number%10;
        sum = sum + rem + tem;
        printf("%d\n",sum);
    }
   return 0;
}
