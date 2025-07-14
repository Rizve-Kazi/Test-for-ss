#include<stdio.h>
#include<string.h>
int main()
{
    int test,len;
    int x=0,y=0,k=0,m=0;
    char str1[101];
    char str2[101];

    scanf("%d",&test);

    for(int i=0;i<test;i++)
    {
        scanf("%d",&len);

        scanf("%s",&str1);
        scanf("%s",&str2);

        for(int j=0;j<len;j++)
        {
            if(str1[j]=='R')
            {
                x++;
            }
            else if(str1[j]=='G' || str1[j]=='B')
            {
                k++;
            }
        }

          for(int k=0;k<len;k++)
        {
            if(str2[k]=='R')
            {
                y++;
            }
            else if(str2[k]=='G' || str2[k]=='B')
            {
                m++;
            }
        }
        if((x==y) && (m==k))
        {
            printf("YES\n");
        }
//        else if(m==k)
//        {
//            printf("YES\n");
//        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
