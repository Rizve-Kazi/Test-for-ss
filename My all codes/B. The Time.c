#include<stdio.h>
int main()
{
    int hour,min,a;
    int new_hour,new_min,m,sum;
    char c;

    scanf("%d %c %d",&hour,&c,&min);
    scanf("%d",&a);

    new_hour = hour+(a/60);
    new_min = min+(a%60);

    if(new_hour>=1 && new_hour<=22)
    {
        if(new_min<60)
        {
            printf("%.2d%c%.2d\n",new_hour,c,new_min);
        }

        else if(new_min>=60)
        {
            m = (new_min-60);
            printf("%.2d%c%.2d\n",new_hour+1,c,m);
        }
    }

    else if(new_hour>=23 || hour>=23)
    {
        if(new_hour==23 && new_min<60) //......1
        {
            printf("%.2d%c%.2d\n",new_hour,c,new_min);

        }

         else if(new_hour==23 && new_min>=60) //.....2
        {
            m = (new_min-60);
            sum = 0+((new_hour+1)-24);
            printf("%.2d%c%.2d\n",sum,c,m);
        }


        else if(new_hour>=24 && new_min>60) //....3
        {
            sum=0+(new_hour-24);
            printf("%.2d%c%.2d\n",sum,c,new_min);
        }

        else if(new_hour>=24  && new_min>=60) //....4
        {
            m = (new_min-60);
            sum = 0+((new_hour+1)-24);
            printf("%.2d%c%.2d\n",sum,c,m);
        }

    }

}
