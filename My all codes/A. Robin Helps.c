#include<stdio.h>
int main()
{
    int n,k,test;
    int arr[51];
    scanf("%d",&test);

    while(test--)
    {
        scanf("%d %d",&n,&k);

        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }

        int count1=0;
        int total=0;

        for(int i=0; i<n; i++)
        {
            if(arr[i]>=k)
            {
                total=total+arr[i];
            }

            else if(total>0 && arr[i]==0)
            {
                total--;
                count1++;
            }
        }

        {
           printf("%d\n",count1);
            printf("%d\n",k-total);
        }
    }

    return 0;
}
