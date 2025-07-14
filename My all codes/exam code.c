#include<stdio.h>
int main()
{
    int num,rem,temp;
    scanf("%d",&num);

    temp=num;
    int count=0;

//    printf("last digit = %d\n",(num%10));

    while(temp!=0)
    {
        temp=temp/10;
        printf("%d ",temp);
        count++;
    }
    printf("Count = %d\n",count);
//    printf("First digit = %d\n",rem);
}
