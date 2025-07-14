#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int x=0,y=0;
    scanf("%s",&str);

    int len=strlen(str);

    for(int i=0; i<len; i++)
    {
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                x++;
            }

            else if(str[i]>='a' && str[i]<='z')
            {
                y++;
            }
        }
    }
    if(x>y)
    {
        strupr(str);
        printf("%s\n",&str);
    }
    else if(y>=x)
    {
        strlwr(str);
        printf("%s\n",&str);
    }
    return 0;
}
