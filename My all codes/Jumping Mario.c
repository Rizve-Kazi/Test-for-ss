#include<stdio.h>
int main()
{
    int test,len;
    int arr[101];
    scanf("%d",&test);


   for(int k=1;k<=test;k++)
    {
        scanf("%d",&len);
         int count1=0;
         int count2=0;

        for(int i=0;i<len;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int j=0;j<len-1;j++)
        {
            if(arr[j+1]>arr[j])
            {
                count1++;
            }
            else if(arr[j+1]<arr[j])
            {
                count2++;
            }
        }

        printf("Case %d: %d %d\n",k,count1,count2);
    }
}
