#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,range;
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

        if((n1>n2) && (n1>n3) && (n1>n4))
        {
            printf("0\n");
        }

       else if((n2>n1) && (n2>n3) && (n2>n4))
        {
            printf("1\n");
        }

        else if((n3>n1) && (n3>n2) && (n3>n4))
        {
            printf("2\n");
        }

        else if((n4>n1) && (n4>n2) && (n4>n3))
        {
            printf("3\n");
        }
    }
    return 0;
}
