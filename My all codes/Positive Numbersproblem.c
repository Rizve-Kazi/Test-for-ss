#include<stdio.h>
int main()
{
    double number,positive=0;
    for(int i =1;i<=6;i++)
    {
        scanf("%lf",&number);
        if(number>0)
            positive = positive+1;
    }
printf("%.0lf valores positivos\n",positive);
return 0;
}





