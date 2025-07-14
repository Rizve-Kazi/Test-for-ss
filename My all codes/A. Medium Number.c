#include<stdio.h>
int main()
{
    int range,n1,n2,n3;
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%d %d %d",&n1,&n2,&n3);

        if(n1>=n2 && n1>=n3 && n2>=n3)//1,n2
        {
            printf("%d\n",n2);
        }
       else if(n1>=n2 && n1>=n3 && n3>=n2)//2,n3
        {
            printf("%d\n",n3);
        }

        else if(n2>=n1 && n2>=n3 && n1>=n3)//3,n1
        {
            printf("%d\n",n1);
        }
         else if(n2>=n1 && n2>=n3 && n3>=n1)//4,n3
        {
            printf("%d\n",n3);
        }
        else if(n3>=n1 && n3>=n2 && n1>=n2)//5,n1
        {
            printf("%d\n",n1);
        }
        else if(n3>=n1 && n3>=n2 && n2>=n1) //6,n2
        {
            printf("%d\n",n2);
        }
    }
    return 0;
}
