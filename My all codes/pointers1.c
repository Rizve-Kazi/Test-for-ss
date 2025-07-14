#include<stdio.h>
int main()
{
    int a[] = {10,20,30,40,50};
    int *ptr;
    ptr = &a[0];

    for(int i=0;i<5;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
}
