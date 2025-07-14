#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="codeforces";
    char str2[1000];
    int test;
    scanf("%d",&test);

    for(int i=1;i<=test;i++)
    {
        scanf("%s",&str2);
    }

    for(int n=1;n<=test;n++)
    {
       for(int j=0;j<9;j++)
       {
           for(int k=0;str2[k]!='\0';k++)
           {
               if(str1[j]==str2[k])
               {
                   count++;
                   break;
               }
           }
       }
    }
       printf("%d\n",count);
    }

}
