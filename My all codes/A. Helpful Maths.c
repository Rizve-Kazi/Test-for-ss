#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%s",&str);
    int len=strlen(str);

    for(int i=0; i<len; i++)
    {
        for(int j=i; j<len; j++)
        {
            if(str[i]>str[j])
            {
                int temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }

    int j=0;

    for(int i=0; i<len; i++)
    {
        if(str[i]!='+')
        {
            str[j++]=str[i];
        }
    }
    str[j]='\0';

    int length=strlen(str);

    for(int i=0; i<length; i++)
    {
        printf("%c",str[i]);


        if(length-1!=i)
        {
            printf("+");

        }
        else if(length==i)
        {
            printf("\n");
            break;
        }
    }
    return 0;

}
