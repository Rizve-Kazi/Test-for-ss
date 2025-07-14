#include<stdio.h>
int main()
{
    int p,h,o;
    while(1)
    {
        scanf("%d %d %d",&p,&h,&o);

        if((o-p)>=h)
        {
            printf("Props win!\n");
        }
        else
        {
            printf("Hunters win!\n");
        }

    }
    return 0;
}
