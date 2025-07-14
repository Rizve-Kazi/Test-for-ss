#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1001];
    scanf("%s",&str);
    int len=strlen(str);
    int a=0;

    for(int i=0; i<len;)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i=i+3;

            if(a!=0)
            {
                printf(" ");
            }
        }
        else
        {
            a=1;
            printf("%c",str[i]);
        }

        i++;

    }
}
