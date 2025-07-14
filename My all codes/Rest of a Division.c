#include<stdio.h>
int main()
{
    int number_one,number_two,i,temp;
    scanf("%d %d",&number_one,&number_two);

    if(number_one>number_two)
    {
        temp = number_one;
        number_one = number_two;
        number_two = temp;

    }

      for(i=number_one+1; i<number_two; i++)
        {
            if(i%5==2 || i%5==3)
            {
                printf("%d\n",i);
            }

        }

    return 0;
}
