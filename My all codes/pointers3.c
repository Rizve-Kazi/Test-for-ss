#include<stdio.h>
int main()
{
    int x=10;
    int *ptr;

    ptr = &x;

    printf("Adress = %d\n",ptr);
    printf("Adress = %d\n",ptr-3);
}
