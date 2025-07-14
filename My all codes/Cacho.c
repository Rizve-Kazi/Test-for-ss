#include<stdio.h>
int main()
{
    int a1,a2,a3,a4,a5,test;
    scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5);

        if((a1==1) && (a2==2) && (a3==3) && (a4==4) && (a5==5))
        {
            printf("Y\n");
        }
        else if((a1==2) && (a2==3) && (a3==4) && (a4==5) && (a5==6))
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
