#include<stdio.h>
int main()
{
    int n,k;
    int arr[2000];
    scanf("%d %d",&n,&k);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    int count=0;

    for(int j=0;j<n;j++)
    {
       if(arr[j]>k)
       {
           count+=2;
       }
       else if(k>=arr[j])
       {
           count++;
       }
    }
    printf("%d\n",count);
    return 0;

}
