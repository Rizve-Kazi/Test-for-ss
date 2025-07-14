#include<stdio.h>
#include<string.h>
int main()
{
    int len,x=0,y=0;
    char str[100000];
    scanf("%d",&len);
    scanf("%s",&str);

    for(int i=0;i<len;i++)
    {
       if(str[i]=='A')
       {
           x++;
       }
       else if(str[i]=='D')
       {
           y++;
       }

    }
    if(x>y)
    {
        printf("Anton\n");
    }
    else if(y>x)
    {
        printf("Danik\n");
    }
    else if(x==y)
    {
        printf("Friendship\n");
    }
    return 0;
}
