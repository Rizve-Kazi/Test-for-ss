#include<stdio.h>
#include<string.h>
int main()
{
    int test;scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        char str[101];scanf("%s",&str);
        int len=strlen(str);

        if(len%2!=0)
        {
            printf("NO\n");
            continue;
        }

        char left_str[(len/2)+1],right_str[(len/2)+1];
        int left_ind=0,right_ind=0;

        for(int j=0;j<len;j++)
        {
            if(j<len/2)
            {
                left_str[left_ind]=str[j];
                left_ind++;
            }
            else if(j>=len/2)
            {
                right_str[right_ind]=str[j];
                right_ind++;
            }
        }
        left_str[left_ind]='\0',right_str[right_ind]='\0';

        if(strcmp(left_str,right_str)==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
