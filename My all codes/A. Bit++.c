#include<stdio.h>
int main()
{
    int test,x=0,y=0,sum;
    char string[4];
    scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        scanf("%s",&string);
        for(int j=0; j<3; j++)
        {
            if(string[j]=='x++')
            {
                x++;
                break;
            }
            else if(string[j]=='x--')
            {
                x--;
                break;
            }
        }
    }
    printf("%d\n",x);
    return 0;
}
