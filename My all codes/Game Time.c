#include<stdio.h>
int main()
{

    int time_one,time_two,day=24,total_hour;
    {
scanf("%d %d",&time_one,&time_two);
if(time_one>time_two)

{total_hour =(day-time_one)+ time_two;
 printf("O JOGO DUROU %d HORA(S)",total_hour);}


 else if (time_two>time_one)
{total_hour=(day-time_one)-(day-time_two);
    printf("O JOGO DUROU %d HORA(S)",total_hour);}


    else if (time_two == time_one)
{total_hour=day;
    printf("O JOGO DUROU %d HORA(S)",total_hour);}


    }

}
