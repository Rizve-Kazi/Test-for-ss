#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    char str1[101]="codeforces";
    char str2[101];

    scanf("%d",&test);

    for(int i=1; i<=test; i++)
    {
        scanf("%s",&str2);
        int len=strlen(str2);
        int count=0;

        for(int j=0; j<len; j++)
        {
            if(str1[j]!=str2[j])
            {
                count++;

            }
        }

        printf("%d\n",count);
    }

}
