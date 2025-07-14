#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        printf("%d\n",i,i=i+1);
    }

    return 0;

}
