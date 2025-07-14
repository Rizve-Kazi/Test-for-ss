#include<stdio.h>
int main()
{
    int len;
    scanf("%d",&len);
    int arr[101];

    for(int i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }

    int x;

    for(int j=0;j<len;j++)
    {
        if(arr[j]==0)
        {
            x=1;
        }
        else if(arr[j]==1)
        {
            x=0;
            break;
        }
    }
    if(x==1)
    {
        printf("EASY\n");
    }
    else if(x==0)
    {
        printf("HARD\n");
    }
    return 0;
}
