#include<stdio.h>
int main()
{
    int range,hour,min;
    char ch;
    char s1[3]={"AM"};
    char s2[3]={"PM"};

    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%d %c %d",&hour,&ch,&min);

        if(hour>=13 && hour<=23)
        {
            printf("%.2d%c%.2d %s\n",hour-12,ch,min,s2);
        }

        else if(hour>=1 && hour<=11)
        {
             printf("%.2d%c%.2d %s\n",hour,ch,min,s1);
        }

        else if(hour==00)
        {
             printf("%.2d%c%.2d %s\n",hour+12,ch,min,s1);
        }
        else if(hour==12)
        {
            printf("%.2d%c%.2d %s\n",hour,ch,min,s2);
        }
    }
    return 0;
}
