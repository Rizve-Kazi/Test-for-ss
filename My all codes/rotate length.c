#include<stdio.h>
int rmDuplicate(int x[7],int y)
{
    int len=0;

    for(int i=0;i<y-1;i++)
    {
        if(x[i]!=x[i+1])
        {
            x[len++]=x[i];
            x[len++]=x[y-1];

            return len;
        }
    }
}
int main()
{
    int arr[7]={10,10,20,30,10,40,50};
    int n=7;

    int result = rmDuplicate(arr,n);
    printf("Length = %d\n",result);
}
