#include<stdio.h>
int main()
{
    int number,dividor,multiple,remainder;
    scanf("%d",&number);

    dividor = number/2;
    multiple = dividor*2;
    remainder = number - multiple;

    printf("Remainder = %d\n",remainder);
}
