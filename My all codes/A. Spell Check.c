#include<stdio.h>
#include<string.h>
int main()
{
    int test,len;
    char str[101];

    scanf("%d",&test);
    int x;

    while(test--)
    {
        scanf("%d",&len);
        scanf("%s",&str);

        {int j=0;

        if(strlen(str)>6)
        {
            printf("NO\n");
        }
        else
        {

            for(int i=0; i<test; i++)
            {
                if((str[i]!='T') && (str[i]!='i') && (str[i]!='m') && (str[i]!='u') && (str[i]!='r'))
                {
                    str[j++]=str[i];
                }
            }
            str[j]='\0';
            printf("Str = %s\n",str);

            if(strlen(str)==0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        }

    }
}
