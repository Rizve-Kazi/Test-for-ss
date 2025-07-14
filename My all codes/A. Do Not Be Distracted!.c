#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
int main()
{
    int test,len;
    char str[101];

    scanf("%d",&test);

    for(int k=0; k<test; k++)
    {
        scanf("%d",&len);
        scanf("%s",&str);
        {
            int j=0;

            for(int m=0; m<len; m++)
            {
                if(str[m]!=str[m+1])
                {
                    str[j++]=str[m];
                }
            }
            str[j]='\0';
//            printf("Str = %s\n",str);

        }

        {
            int length=strlen(str);
//            printf("Old length = %d\n",length);
//            char str2[101];
//            strcpy(str2,str);

            int m=0;
            for(int i=0; i<length; i++)
            {
                for(int j=i+1; j<length; j++)
                {
                    if(str[i]==str[j])
                    {
                        for(int k=j; k<length; k++)
                        {
                            str[k]=str[k+1];
                        }
                        length--;
                        j--;
                        m++;
                    }
                }
            }
            if(length==(length-m))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
