#include<stdio.h>
int main()
{
    int len,k,count=0;
    int arr[20];
    scanf("%d %d",&len,&k);

    for(int i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<len;j++)
    {
       if(arr[j]>=arr[k+1])
       {
           count++;
       }
       else if(arr[k]<arr[j])
       {
           count=0;
       }
    }
    printf("%d\n",count);

}
