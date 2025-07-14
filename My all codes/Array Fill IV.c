#include<stdio.h>
int main()
{
    int number,i=1,j=1,k=1;

    while(i<=15 && j<=15 && k<=15)

    {
        scanf("%d",&number);


            if(number%2==0)
            {
                printf("Even[%d] = %d\n",k,number);
                k++;
            }

            if(number%2!=0)
            {
                printf("odd[%d] = %d\n",j,number);
                j++;
            }




        i++;

    }
}
