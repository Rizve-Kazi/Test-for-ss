#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[1001];
    fgets(s,sizeof(s),stdin);

    int inword=0,count=0,i=0;

    while(s[i]!='\0')
    {
        if(!isspace(s[i]) && inword==0)
        {
            inword=1;
            count++;
        }
        else if(isspace(s[i]))
        {
            inword=0;

        }
        i++;
    }
    printf("Word count = %d\n",count);
}
