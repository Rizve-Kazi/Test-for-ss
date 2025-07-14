#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",&str);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='?' && str[0]=='B' && i%2==0)
        {
            str[i]='R';
        }
    }
    printf("%s\n",str);
}
