#include<stdio.h>
#include<string.h>
int main()
{
    int temp,len,arr[20];

    printf("Enter the length of the array = ");
    scanf("%d",&len);
    printf("Enter your array element = ");

    for(int i=0; i<len; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n");

    printf("Before sorted = ");

    for(int m=0; m<len; m++)
    {
        printf("%d ",arr[m]);
    }

    for(int k=0; k<len; k++)
    {
        for(int j=k; j<len; j++)
        {
            if(arr[k]>arr[j])
            {
                temp=arr[k];
                arr[k]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nAfter sorted = ");

    for(int j=0; j<len; j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}

