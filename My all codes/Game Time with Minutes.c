#include<stdio.h>
int main()
{
    int start_hour,end_hour,start_min,end_min,day=24,one_hour=60,total_hour,total_min;

    scanf("%d %d",&start_hour,&start_min);
    scanf("%d %d",&end_hour,&end_min);


    if(start_hour>end_hour && start_min>end_min)
        {total_hour =(day-start_hour-1)+ end_hour;
       total_min=(one_hour-start_min)+end_min;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total_hour,total_min);}

 else if(end_hour > start_hour && end_min > start_min)
  {total_hour=(day-start_hour)-(day - end_hour);
   total_min=end_min-start_min;
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total_hour,total_min);}


 else if(start_hour>end_hour && end_min>start_hour)

 {total_hour =(day-start_hour)+ end_hour;
 total_min=end_min-start_min;
 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total_hour,total_min);}


 else if(end_hour>start_hour && start_min>end_min)
     {total_hour=(day-start_hour-1)-(day-end_hour);
   total_min=(one_hour-start_min)+end_min;
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total_hour,total_min);}



else if(start_hour == end_hour && start_min > end_min)
    {total_hour=day-1;
  total_min=(one_hour-start_min)+end_min;
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total_hour,total_min);}

  else if(start_hour==end_hour && end_min>start_min)
        {total_hour=0;
   total_min=end_min-start_min;
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total_hour,total_min);}



 else if(start_hour == end_hour && start_min == end_min)
   {total_hour = day;
  total_min = start_min - end_min;
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total_hour,total_min);}

  return 0;
}












