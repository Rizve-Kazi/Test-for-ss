#include<stdio.h>
#include<string.h>
int main()
{
    int len,count=0;
    char str[51];
    scanf("%d",&len);
    scanf("%s",&str);

    for(int i=0; i<len-1; i++)
    {
        for(int j=1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Count = %d\n",count);
}
