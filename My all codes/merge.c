#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n+1];
    int arr2[n+1];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

     for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }

    int merge[n+n+2];

    for(int i=0;i<n;i++)
    {
        merge[i]=arr[i];
    }
    for(int j=0;j<n;j++)
    {
        merge[n+j]=arr2[j];
    }

    for(int i=0;i<n+n;i++)
    {
        printf("%d ",merge[i]);
    }

}
