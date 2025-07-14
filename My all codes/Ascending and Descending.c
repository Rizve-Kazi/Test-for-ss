#include<stdio.h>
int main()
{
    int number_one,number_two;

    for(;;)
    {
        scanf("%d",&number_one);
        scanf("%d",&number_two);
        if(number_one==number_two)
        {
            break;
        }

        if(number_one>number_two)
        {
            printf("Decrescente\n");
        }

        else if(number_two>number_one)
        {
            printf("Crescente\n");
        }
    }

    return 0;
}
