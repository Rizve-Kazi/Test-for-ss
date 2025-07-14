#include<stdio.h>
int main()
{
    int number[]= {4454,56500,254,2982,232359};
    int size_Of_Array = sizeof(number)/sizeof(number[0]);

    int first,second;

    if(number[1]>number[0])
    {
        first = number[1];
        second = number[0];
    }

    else
    {
        first = number[0];
        second = number[1];
    }

    for(int index =2; index<size_Of_Array; index++)

    {
        if(number[index]>first)
        {
            second = first;
            first = number[index];
        }

        else if (number[index]>second && number[index]!=first)
        {
            second = number[index];
        }
    }

    printf("Frist value = %d\n",first);
    printf("Second value = %d\n",second);

}
