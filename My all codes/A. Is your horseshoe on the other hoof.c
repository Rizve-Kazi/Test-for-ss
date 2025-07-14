#include<stdio.h>
int main()
{
    long long int s1,s2,s3,s4;
    int count=0;
    scanf("%lld %lld %lld %lld",&s1,&s2,&s3,&s4);

    int arr[5]={s1,s2,s3,s4};

    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
