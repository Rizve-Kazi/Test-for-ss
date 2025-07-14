#include<stdio.h>
#include<string.h>
int main()
{
    int test,len,range;
    char str[10001], str1[10001];
    scanf("%d",&test);

    for(int i=1;i<=test;i++)
    {

        scanf("%d %d",&len,&range);
        scanf("%s", &str);
        strcpy(str1, str);
//        int len = strlen(str);

        for(int i = 0; i < len; i++)
        {
            for(int j = i + 1; j < len; j++)
            {
                if(str[i] > str[j])
                {
                    char temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }

        int count = 0;

        for(int j = 0; j < len; j++)
        {
            if(str[j] != str1[j])
            {
                count++;
            }
        }

        if(count>0 && range>=count)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

        return 0;
    }

}

