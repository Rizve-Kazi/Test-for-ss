#include<stdio.h>
int main()
{
    int number,range;
    scanf("%d %d",&number,&range);

    int rem,tem,sub1,sub2;
    tem=number;

    while(range==1)
    {
        if(tem%10==0)
        {
            rem=tem%10;
            tem=tem/10;
        }

        else
        {
            sub1=tem;
            sub2=tem-1;
        }
    }
    printf("Tem = %d\n",rem);

}
