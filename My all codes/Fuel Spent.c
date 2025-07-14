#include<stdio.h>
int main()
{
   double fuel_per_distance=12,hour_distance,hour,total_fuel;
   scanf("%lf",&hour);
   scanf("%lf",&hour_distance);

   total_fuel =((hour*hour_distance)/fuel_per_distance);

   printf("%.3lf",total_fuel);
   return 0;

}



