#include<stdio.h>
int main()
{
    double number,total_salary,bonus,reduceRate1=15,reduceRate2=12,reduceRate3=10,reduceRate4=7,reduceRate5=4;
    scanf("%lf",&number);

    if(number>=0 && number<=400.00)
    {bonus=(number*reduceRate1)/100;
    total_salary=number+bonus;
    printf("Novo salario: %.2lf\n",total_salary);
    printf("Reajuste ganho: %.2lf\n",bonus);
    printf("Em percentual: %.0lf %%\n",reduceRate1);}


 else if(number>=400.01 && number<=800.00)
    {bonus=(number*reduceRate2)/100;
    total_salary=number+bonus;
    printf("Novo salario: %.2lf\n",total_salary);
    printf("Reajuste ganho: %.2lf\n",bonus);
    printf("Em percentual: %.0lf %%\n",reduceRate2);}


 else if(number>=800.01 && number<=1200.00)
    {bonus=(number*reduceRate3)/100;
    total_salary=number+bonus;
    printf("Novo salario: %.2lf\n",total_salary);
    printf("Reajuste ganho: %.2lf\n",bonus);
    printf("Em percentual: %.0lf %%\n",reduceRate3);}


 else if(number>=1200.01 && number<=2000.00)
    {bonus=(number*reduceRate4)/100;
    total_salary=number+bonus;
    printf("Novo salario: %.2lf\n",total_salary);
    printf("Reajuste ganho: %.2lf\n",bonus);
    printf("Em percentual: %.0lf %%\n",reduceRate4);}


    else  if(number>=2000.01)
    {bonus=(number*reduceRate5)/100;
    total_salary=number+bonus;
    printf("Novo salario: %.2lf\n",total_salary);
    printf("Reajuste ganho: %.2lf\n",bonus);
    printf("Em percentual: %.0lf %%\n",reduceRate5);}

else if(number>0)

{printf("\n");}

   return 0;

}
