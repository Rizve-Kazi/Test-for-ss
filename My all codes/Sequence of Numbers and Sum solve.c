#include<stdio.h>
int main()
{
    int number_one,number_two,i,j;

    while(1)
    {
        scanf("%d %d",&number_one,&number_two);
        int sum = 0;

        if(number_one<=0 || number_two<=0)
        {
            break;
        }
        if(number_one>number_two)
        {
            for(i=number_two; i<=number_one; i++)
            {
                sum = sum + i;
                printf("%d",i);

                if(i!=number_one)
                {
                    printf(" ");
                }

                if(i==number_one)
                {
                    printf(" ");
                    printf("Sum=%d\n",sum);
                }
            }
        }


        else if(number_two>number_one)
        {
            for(j=number_one; j<=number_two; j++)
            {
                sum = sum + j;
                printf("%d",j);

                if(j!=number_two)
                {
                    printf(" ");
                }

                if(j==number_two)
                {
                    printf(" ");
                    printf("Sum=%d\n",sum);
                }
            }
        }

    }
    return 0;
}
