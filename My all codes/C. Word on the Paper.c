#include<stdio.h>
#include<string.h>
int main()
{
    char str[9][9];
//    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            scanf("%s",&str);
        }

        for(int i=0;i<=8;i++)
        {
            if(str[i][i]>='a' && str[i][i]<='z')
            {
                printf("%s",str)[i][i];
            }
        }
    }

}
