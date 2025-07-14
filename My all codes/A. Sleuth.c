#include<stdio.h>
#include<string.h>
#include<stdio.h>
int main()
{
    char str[101];
    gets(str);

    int len=strlen(str);

    int j=0;

    for(int i=0; i<len; i++)
    {
        if(str[i]!=' ')
        {
            str[j++]=str[i];
        }
    }
    str[j]='\0';

    int length=strlen(str);

    int k=0;

    for(int i=0; i<length; i++)
    {
        if(str[i]!='?')
        {
            str[k++]=str[i];
        }
    }

    str[k]='\0';

    int final_len=strlen(str);

    for(int i=0; i<final_len; i++)
    {
        if(str[final_len-1]=='a' || str[final_len-1]=='e' || str[final_len-1]=='i' || str[final_len-1]=='o' || str[final_len-1]=='u' || str[final_len-1]=='y')
        {
            printf("YES\n");
            return 0;
        }
        if(str[final_len-1]=='A' || str[final_len-1]=='E' || str[final_len-1]=='I' || str[final_len-1]=='O' || str[final_len-1]=='U' || str[final_len-1]=='Y')
        {
            printf("YES\n");
            return 0;
        }

    }
    printf("NO\n");

    return 0;
}
