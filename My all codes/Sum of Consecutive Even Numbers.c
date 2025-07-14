
#include<stdio.h>
int main()
{
    int j,number;

    while(1)
    {
        scanf("%d",&number);
        int sum=0;



        if(number==0)
        {
            break;
        }

        if(number%2==0)
        {
            for(int i=number; i<=number+8 ; i=i+2)
            {
                sum = sum + i;

            }
            printf("%d\n",sum);

        }

        else if(number%2!=0)
        {
            for(int i=number+1; i<=number+9; i=i+2)
            {
                sum = sum + i;

            }
            printf("%d\n",sum);
        }
    }

    return 0;
}
