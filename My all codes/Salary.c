#include<stdio.h>
int main()
{

    double worker_number, work_hour,per_hour_amount,salary;

    scanf("%lf %lf %lf",&worker_number,&work_hour,&per_hour_amount);

    salary = (work_hour*per_hour_amount);

    printf("NUMBER = %.0lf\n",worker_number);
    printf("SALARY = U$ %.2lf\n",salary);
    return 0;















}
