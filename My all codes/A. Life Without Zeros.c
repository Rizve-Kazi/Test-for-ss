#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int n1,n2,sum;
    scanf("%lld %lld",&n1,&n2);

    sum=n1+n2;

    char str1[1000];
    char str2[1000];
    char str3[1000];

    sprintf(str1,"%lld",n1);
    sprintf(str2,"%lld",n2);
    sprintf(str3,"%lld",sum);

    int len1=strlen(str1);
    int len2=strlen(str2);
    int len3=strlen(str3);


    int j=0;

    {
        for(int i=0; i<len1; i++)
        {
            if(str1[i]!='0')
            {
                str1[j++]=str1[i];
            }
        }
        str1[j]='\0';
    }

    int k=0;

    {
        for(int i=0; i<len2; i++)
        {
            if(str2[i]!='0')
            {
                str2[k++]=str2[i];
            }
        }
        str2[k]='\0';
    }

    int m=0;

    {
        for(int i=0; i<len3; i++)
        {
            if(str3[i]!='0')
            {
                str3[m++]=str3[i];
            }
        }
        str3[m]='\0';
    }

    long long int final_sum = atoi(str3);
    long long int num1= atoi(str1);
    long long int num2= atoi(str2);

    if(final_sum==(num1+num2))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
