#include<stdio.h>
int main()
{
    int number;
for(;;)
    {
        scanf("%d",&number);
        if(number!=2002)
        {
             printf("Senha Invalida\n");

        }

        if(number==2002)
        {
             printf("Acesso Permitido\n");
            break;


        }



    }

    return 0;
}
