#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char str[101];
    scanf("%d",&len);
    scanf("%s",&str);
    strlwr(str);

    for(int i=0; i<len-1; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(str[i]==str[j])
            {
                for(int k=j; k<len; k++)
                {
                    str[k]=str[k+1];
                }
                j--;
                len--;
            }
        }
    }

    int count=0;

//    printf("Str = %s\n",str);

    for(int m=0; m<len; m++)
    {
        if(str[m]>=97 && str[m]<=122)
        {
            count++;
        }
    }

    if(count==26)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
