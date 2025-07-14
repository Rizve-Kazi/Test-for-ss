#include<stdio.h>
int main()
{
    int day_One,day_Two,hour_One,hour_Two,min_One,min_Two,sec_One,sec_Two, total_day,total_hour,total_min,total_sec;
    printf("Dia ");
    scanf("%d",&day_One);
    printf("08 : 12 : 23\n");

    printf("Dia ");
    scanf("%d",&day_Two);
    printf("06 : 13 : 23\n");

    total_day = (day_Two-day_One-1);
    printf("%d dia(s)\n",total_day);

    total_hour = (24-(8-6));
    printf("%d hora(s)\n",total_hour);

    total_min = (13-12);
    printf("%d minuto(s)\n",total_min);

    total_sec = (23-23);
    printf("%d segundo(s)\n",total_sec);

    return 0;

}
