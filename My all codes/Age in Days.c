#include<stdio.h>
int main()
{
    int days,years,month;
    scanf("%d",&days);

    years = days/365;
    days = days%365;
    month = days/30;
    days = days%30;

    printf("%d ano(s)\n",years);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",days);

    return 0;

}






