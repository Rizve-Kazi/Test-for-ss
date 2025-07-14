#include<stdio.h>
int main()
{
    int range,number,first,second;
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%d",&number);
        if(range==2 && number[1]>number[0])
        {
            first = number[1];
            second = number[0];
        }

        else
        {
            first = number[0];
            second = number[1];
        }

        else if(range<2)
        {
            for(int index=2;index<range;i++)
            {
                if(number[index]>first)
                {
                    first = number[index];
                    second = first;
                }
                else if(number[index]>second && number[index]!=first)
                {
                    second = number[index];
                }
            }
        }

        printf("%d\n",second);

    }
}
