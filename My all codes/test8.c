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

     switch(choice)

    {


     case 1:

       {
        printf("Enter the Fahrenheit temperature = ");
        scanf("%f",&temp);
        ConvertedTemp = (temp-32)/1.8;
        printf("Celsius temperature is = %f",ConvertedTemp);
        break;


       }


      case 2 :
    {
        printf("Enter the temperature Celsius = ");
        scanf("%f",&temp);
        ConvertedTemp = (1.8*temp+32);
        printf("The Fahrenheit temp is = %f",ConvertedTemp);
         break;


    }


        default:
         printf("Not valid ");


    }

          getch();


}
