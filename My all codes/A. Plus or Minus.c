#include<stdio.h>
int main()
{
    int range,number_one,number_two,number_three;
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%d %d %d",&number_one,&number_two,&number_three);

        if(number_one + number_two == number_three)
        {
            printf("+\n");
        }

        else if(number_one - number_two == number_three)
        {
            printf("-\n");
        }

    }

    return 0;
}
