#include<stdio.h>
int main()
{
    int distiny,result;
    scanf("%d",&distiny);

    result = distiny/5;
    if(distiny>0 && distiny<=5)
    {
        printf("1\n");
    }
    else if(distiny%5==0)
    {
        printf("%d\n",result);
    }

    else if(distiny%5!=0)
    {
        printf("%d\n",result+1);
    }
}
