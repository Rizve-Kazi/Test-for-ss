#include<stdio.h>
int main()
{
    char name;
     double extra_sell_amount,bonus,fixed_salary,total_salary;
     scanf("%s\n",&name);
     scanf("%lf %lf",&fixed_salary,&extra_sell_amount);

     bonus = ((extra_sell_amount*15)/100);

     total_salary = (bonus+fixed_salary);

     printf("TOTAL = R$ %.2lf\n",total_salary);

     return 0;

}








