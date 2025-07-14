
#include<stdio.h>
#include<math.h>
int main()
{
    int number,temp,rem,n;
    scanf("%d",&number);

    temp=number;

    printf("First digit = %d\n",number%10);

    int count=0;

    while(temp!=0)
    {
        rem=temp%10;
        temp=temp/10;
        count++;
    }

    n=pow(10,count-1);

    printf("Last digit = %d\n",123%1000);

}
