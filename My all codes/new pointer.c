#include<stdio.h>
int get(int j)
{
    int i=100;
    return &i;
}
int main()
{
    int *ptr = get(ptr)
    printf("Ptr = %d\n",*ptr);
}
