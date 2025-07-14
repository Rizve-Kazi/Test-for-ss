
#include<stdio.h>
int main()
{
    double taka,rem,coins,subtract,tempa;
     int temp,devide;
     scanf("%lf",&taka);


        printf("NOTAS:\n");
       temp=taka;

       coins=taka-temp;

        rem=temp%100;
        temp=temp/100;
        {printf("%d nota(s) de R$ 100.00\n",temp);}

        temp=rem;
        rem=temp%50;
        temp=temp/50;
        {printf("%d nota(s) de R$ 50.00\n",temp);}


        temp=rem;
        rem=temp%20;
        temp=temp/20;
       { printf("%d nota(s) de R$ 20.00\n",temp);}

        temp=rem;
        rem=temp%10;
        temp=temp/10;
        {printf("%d nota(s) de R$ 10.00\n",temp);}

        temp=rem;
        rem=temp%5;
        temp=temp/5;
        {printf("%d nota(s) de R$ 5.00\n",temp);}

        temp=rem;
        rem=temp%2;
        temp=temp/2;
        {printf("%d nota(s) de R$ 2.00\n",temp);}

  {printf("MOEDAS:\n");}
tempa=rem+coins;

devide=tempa/1.00;
subtract = tempa-(1*devide);
{printf("%d moeda(s) de R$ 1.00\n",devide);}

tempa=subtract;
devide=tempa/0.50;
subtract = tempa-(0.50*devide);
{printf("%d moeda(s) de R$ 0.50\n",devide);}

tempa = subtract;
devide=tempa/0.25;
subtract = tempa-(0.25*devide);
{printf("%d moeda(s) de R$ 0.25\n",devide);}


tempa = subtract;
devide=tempa/0.10;
subtract = tempa-(0.10*devide);
{printf("%d moeda(s) de R$ 0.10\n",devide);}

tempa = subtract;
devide=tempa/0.05;
subtract = tempa-(0.05*devide);
{printf("%d moeda(s) de R$ 0.05\n",devide);}

tempa = subtract;
devide=tempa/0.01;
subtract = tempa-(0.01*devide);
{printf("%d moeda(s) de R$ 0.01\n",devide);}

return 0;
}
