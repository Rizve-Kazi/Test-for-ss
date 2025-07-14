#include<stdio.h>
int main()
{
    double total_distance,total_fuel,average_consumption;
    scanf("%lf %lf",&total_distance,&total_fuel);

    average_consumption = (total_distance/total_fuel);

    printf("%.3lf km/l\n",average_consumption);

    return 0;





}
