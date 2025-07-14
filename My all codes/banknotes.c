#include<stdio.h>
int main()
{
    int taka,temp,rem;
    scanf("%d",&taka);
    temp=taka;

    {
      printf("%d\n",taka);
        rem=temp%100;
        temp=temp/100;
        printf("%d nota(s) de R$ 100,00\n",temp);

        temp=rem;
        rem=temp%50;
        temp=temp/50;
        printf("%d nota(s) de R$ 50,00\n",temp);


        temp=rem;
        rem=temp%20;
        temp=temp/20;
        printf("%d nota(s) de R$ 20,00\n",temp);

        temp=rem;
        rem=temp%10;
        temp=temp/10;
        printf("%d nota(s) de R$ 10,00\n",temp);

        temp=rem;
        rem=temp%5;
        temp=temp/5;
        printf("%d nota(s) de R$ 5,00\n",temp);

        temp=rem;
        rem=temp%2;
        temp=temp/2;
        printf("%d nota(s) de R$ 2,00\n",temp);

        temp=rem;
        rem=temp%1;
        temp=temp/1;
        printf("%d nota(s) de R$ 1,00",temp);
    }


    return 0;
}
