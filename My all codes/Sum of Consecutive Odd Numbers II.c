#include<stdio.h>
int main()
{
    int range,number_one,number_two,i,j,k;
    scanf("%d",&range);

    for(i=1; i<=range; i++)
    {
        scanf("%d",&number_one);
        scanf("%d",&number_two);
        int sum = 0;



        if(number_one>number_two)
        {
              int temp = number_one;
        number_one = number_two;
        number_two = temp;
            for(j>number_two; j<number_one; j++)
            {
                if(j%2!=0)
                {
                    sum = sum + j;
                }
            }
            printf("%d\n",sum);
        }



    }
    return 0;
}
