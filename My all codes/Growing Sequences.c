#include<stdio.h>
int main()
{
    int number,i;
    while(1)
    {

        scanf("%d",&number);
        if(number==0)
            break;

        for(i=1; i<=number; i++)
        {
            printf("%d",i);

            if(number!=i)
            {
                printf(" ");
            }
            if(number==i)
            {
                printf("\n");
            }


        }
    }

    return 0;
}
