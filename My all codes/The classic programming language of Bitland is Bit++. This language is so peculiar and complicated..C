#include<stdio.h>
int main()
{
    int range;
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        char s[100];
        scanf("%s",&s);
    }

     if(range%2==0)
        {
            printf("0\n");
        }

        else if(range%2!=0)
        {
            printf("1\n");
        }

    return 0;

}
