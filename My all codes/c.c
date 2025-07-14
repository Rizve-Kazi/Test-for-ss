#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s",&str);

    char p[50]={'h','e','i','d','i'};
//    printf("%s\n",p);
    int len=strlen(str);

    int j=0;

    for(int i=0;i<len;i++)
    {
        if(str[i]==p[j])
        {
            j++;
        }
        if(j==5)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}
