#include<stdio.h>
int main()
{
    int arr[7]={10,20,30,40,50,60,70};
    int i,j,k,n=7,temp;

    printf("Enter the change = ");
    scanf("%d",&k);

    while(k>0)
    {
        temp = arr[n-1];

        for(i=n-2;i>=0;i--)
        {
            arr[i+1] = arr[i];
        }
        arr[0]=temp;
        k--;
    }
    for(j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}
