#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int  count=0;
    scanf("%s",arr);
    int len=strlen(arr);


    for(int j=0; j<len-1; j++)
    {
        for(int k=j+1; k<len; k++)
        {
            if(arr[j]==arr[k])
            {
                count++;
                break;
            }
        }
    }
    if((len-count)%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}
