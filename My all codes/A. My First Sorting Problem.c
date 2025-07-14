#include<stdio.h>
int main()
{
    int range,number_one,number_two;
    scanf("%d",&range);

    for(int i=1; i<=range; i++)
    {
        scanf("%d %d",&number_one,&number_two);

        if(number_one>=number_two)
        {
            printf("%d",number_one);
            printf(" ");
            printf("%d\n",number_two);
        }

        else if(number_two>=number_one)
        {
            printf("%d",number_two);
            printf(" ");
            printf("%d\n",number_one);
        }
    }
    return 0;
}
