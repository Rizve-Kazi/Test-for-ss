#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int removeChar(char *str)
{
    int i,j=0,k=0;
    int len=strlen(str);

    for(i=0;i<len;i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
        {
            str[j++]=str[i];
            k++;

        }
    }

    str[j]='\0';
   for(int m=0;m<k;m++)
   {
       printf(".");
         printf("%s\n",str);
   }

}
int main()
{
    char str[101];
    gets(str);
    strlwr(str);

    removeChar(str);
    return 0;
}
