#include<stdio.h>
int main()
{
    int number,count = 0;

    printf("Enter the number = ");
    scanf("%d",&number);

    while(number!=0)
    {
        number = number/10;
        count++;
    }

    printf("Counting number of a digit in an integer = %d\n",count);
    return 0;
}
