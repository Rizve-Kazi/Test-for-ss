#include<stdio.h>
int main()
{
    int number_one,number_two,i,sum=0;
    scanf("%d",&number_one);
    scanf("%d",&number_two);


    for(i=number_one; i<=number_two; i++)
    {
        if(i%13!=0)

            sum = sum + i;

    }

    printf("%d\n",sum);

    return 0;

}
