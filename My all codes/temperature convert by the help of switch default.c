#include<stdio.h>
int main()
{
   int choice;
   float temp,ConvertedTemp;
   printf("Temperature conversion menu\n");
   printf("1.Fahrenheit to Celsius\n");
   printf("2.Celsius to Fahrenheit\n");
   printf("Enter your choice =");
   scanf("%d",&choice);

   switch (choice )
   {
 case 1 :
    {
       printf("Enter the Farenheit temperature = ");
       scanf("%f",&temp);
       ConvertedTemp = (temp-32)/1.8;
       printf("The temperature is celsius is = %f",ConvertedTemp);
break;

    }

 case 2 :
    {
        printf("Enter the Celsious temperature =");
        scanf("%f", &temp);
        ConvertedTemp = (1.8*temp+32);
        printf("The temperature farenheit is = %f",ConvertedTemp);
break;
    }

 default :
    printf("Not the correct option");

   }



    getch();


}
