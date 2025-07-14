#include<stdio.h>
int main()
{
    int test,len;
    int arr[101];
    int x;
    scanf("%d",&test);

    for(int i=0; i<test; i++)
    {
        scanf("%d",&len);
        for(int j=0; j<len; j++)
        {
            scanf("%d",&arr[i]);
        }
        for(int m=0;m<len;m++)
        {
            for(int n=m;n<len;n++)
            {
                if(arr[m]>arr[n])
                {
                    x=arr[m];
                    arr[m]=arr[n];
                    arr[n]=x;
                }
            }
        }
       for(int b=0;b<len;b++)
       {
           printf("%d ",arr[b]);
       }
    }
}
