#include<stdio.h>
#include<math.h>
int main()
{
    int len;
    scanf("%d",&len);
    int arr[len+1];


    for(int i=0; i<len; i++)
    {
        scanf("%d",&arr[i]);
    }

    int count1=0;
    int count2=0;

    for(int j=0; j<len; j++)
    {
        if(arr[j]==1)
        {
            count1++;
        }
        if(arr[j]==2)
        {
            count2++;
        }
    }
    if(count2==0 && count1!=0)
    {
        printf("%d\n",count1/3);
    }
    else  if(count1>=count2)
    {
        int team=(count1-count2)/3;
        printf("%d\n",count2+team);
    }
    else if(count2>=count1)
    {
        printf("%d\n",count1);
    }

    return 0;
}
