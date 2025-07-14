#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    int arr[101];
    int sum=0;

    for(int i=0; i<number; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<number; i++)
    {
        for(int  j=i; j<number; j++)
        {
            if(arr[j]>arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int k=0; k<number; k++)
    {
        sum=sum+arr[k];
    }
    float half_sum=sum/2;
    int sum2=0;
    int count=0;

    for(int k=0;k<number;k++)
    {
        sum2=sum2+arr[k];
        count++;

        if(sum2>half_sum)
        {
            break;
        }
    }
    printf("%d\n",count);
}
