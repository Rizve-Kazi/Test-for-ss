#include<stdio.h>
int main()
{
    int range,number,i;
    scanf("%d",&range);

    for(i=1;i<=range;i++)
    {
        scanf("%d",&number);

        if((number+1)%3==0)
        {
            printf("First\n");
        }

        else if((number-1)%3==0)
        {
            printf("First\n");
        }

        else
        {
            printf("Second\n");
        }
    }

    return 0;
}
