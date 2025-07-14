#include<stdio.h>




int main()
{

double temp,choice;
    printf("The temparature conversion menu\n");
    printf("Enter your choice (1,2) ");
{
    scanf("%lf",&choice);
    if(choice==1)
        {printf("Temparature = ");}
       scanf("%lf",&temp);
       temp = (temp*1.8+32);
  printf(" Celsius to Fahrenheit = %lf",temp);

  double temp,choice;
    printf("The temparature conversion menu\n");
    printf("Enter your choice : ");


 if(choice==2)
    {printf("Temparature = ");}
scanf("%lf",&temp);
temp = (temp-32)/1.8;
{printf("Fahrenheit to Celsius = %lf",temp);}

}


return 0;


}
