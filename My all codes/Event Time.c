#include<stdio.h>
int main()
{
    char s1[10];
    char s2[2];


    int start_day,end_day,start_hour,end_hour,start_min,end_min,start_sec,end_sec;
    int total_day,total_hour,total_min,total_sec;


    scanf("%s %d\n",&s1,&start_day);
    scanf("%d %s %d %s %d",&start_hour,&s2,&start_min,&s2,&start_sec);

    scanf("%s %d",&s1,&end_day);
    scanf("%d %s %d %s %d",&end_hour,&s2,&end_min,&s2,&end_sec);
    {
        if(end_day>start_day)

        {
            total_day = (end_day-(start_day+1));
            printf("%d dia(s)\n",total_day);
        }

        else if(end_day==start_day)
        {
            total_day = end_day - start_day;
            printf("%d dia(s)\n",total_day);
        }
    }


    {
        if(start_hour>end_hour)
        {
            total_hour = 24 - (start_hour-end_hour);
            printf("%d hora(s)\n",total_hour);
        }

        else if(end_hour>=start_hour)
        {
            total_hour = end_hour - start_hour;
            printf("%d hora(s)\n",total_hour);
        }
    }

    {
        if(start_min>=end_min)
        {
            total_min = (start_min-end_min);
            printf("%d minuto(s)\n",total_min);
        }

        else if(end_min>=start_min)
        {
            total_min = end_min - start_min;
            printf("%d minuto(s)\n",total_min);
        }
    }


    {
        if(start_sec>=end_sec)
        {
            total_sec = (start_sec-end_sec);
            printf("%d segundo(s)\n",total_sec);
        }

        else if(end_sec>=start_sec)
        {
            total_sec = end_sec - start_sec;
            printf("%d segundo(s)\n",total_sec);
        }
    }

    return 0;
}
