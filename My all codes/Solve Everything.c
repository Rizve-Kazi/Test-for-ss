#include<stdio.h>
int main()
{
    int test;
    int arr[14];
    int x;

    scanf("%d",&test);

    for(int a=1; a<=test; a++)
    {

        for(int i=0; i<13; i++)
        {
            scanf("%d",&arr[i]);

        }
        for(int k=0; k<13; k++)
        {
            if(arr[k]>=1 && arr[k]<=128)
            {
                x=1;
            }
            else
            {
                x=0;
            }
        }
        if(x==1)
        {
            printf("Set #%d: Yes\n",a);
        }
        else
        {
            printf("Set #%d: No\n",a);
        }

    }
    return 0;

}


