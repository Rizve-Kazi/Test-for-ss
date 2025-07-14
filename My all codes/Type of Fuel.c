#include<stdio.h>
int main()
{
    int number,alcool=0,gasolina=0,diesel=0;

    printf("MUITO OBRIGADO\n");
    for(;;)
    {
        scanf("%d",&number);
        if(number==4)
        {
            break;
        }

        if(number==1)
        {
            alcool++;
        }

        if(number==2)
        {
            gasolina++;

        }

        if(number==3)
        {
            diesel++;

        }
    }

    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",gasolina);
    printf("Diesel: %d\n",diesel);

    return 0;
}
