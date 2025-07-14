#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);

   if(x>y)
    {
        printf("+\n");
    }

    else if(y>x)
    {
        printf("-\n");
    }

     else if(x==y && z==0)
    {
        printf("0\n");
    }

     else if((x==y) && z!=0)
    {
        printf("?\n");
    }

    return 0;
}
