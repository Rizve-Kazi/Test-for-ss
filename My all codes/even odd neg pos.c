
#include<stdio.h>
int main()
{
    int number,positive=0,negative=0,odd=0,even=0;
    for(int i=1; i<=5; i++)
    {
        scanf("%d",&number);

        {
            if(number%2==0)

                  even++;




            else
                odd++;
        }

        {
            if(number>0)
                positive++;

                if(number<0)

                negative++;

        }

    }

    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",positive);
    printf("%d valor(es) negativo(s)\n",negative);


    return 0;
}
