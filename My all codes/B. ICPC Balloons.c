#include<stdio.h>
#include<string.h>
int main()
{
    int test,len;
    char str[51];

    scanf("%d",&test);

    while(test--)
    {
        scanf("%d",&len);
        scanf("%s",&str);
        strlen(str);
        int count=0;


        int m=0;
        for(int i=0; i<len; i++)
        {
            for(int j=i+1; j<len; j++)
            {
                if(str[i]==str[j])
                {
                    for(int k=j; k<len; k++)
                    {
                        str[k]=str[k+1];
                    }
                    len--;
                    j--;
                    m++;
                }

            }

        }
//        printf("str = %s\n",str);
        printf("%d\n",(len*2)+m);
    }
    return 0;
}
