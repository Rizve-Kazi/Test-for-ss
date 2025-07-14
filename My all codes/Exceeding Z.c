#include<stdio.h>
int main()
{
    int number_one,number_two;
    scanf("%d",&number_one);
    int count_one = 0;
    for(int j=1; j<=number_one; j++)
    {
        if(j*j<=number_one)
        {
            count_one = count_one + 1;
        }
    }

    scanf("%d",&number_two);
    if(number_two>number_one)
    {
        int sum = 0;
        for(int k=1; k<=number_two; k++)
        {
            if(k*k<=number_two)
            {

                sum = sum + 1;
            }
        }
        printf("%d\n",sum+count_one);
    }
    else
    {
        while(number_one>=number_two)
        {
            scanf("%d",&number_two);
            int count=0;

            if(number_two>number_one)
            {
                for(int i=1; i<=number_two; i++)
                {
                    if(i*i<=number_two)
                    {
                        count=count+1;
                    }
                }
                printf("%d\n",count+count_one);
            }

        }

    }
    return 0;

}
