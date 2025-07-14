#include<stdio.h>
int main()
{
    int level,arr_len1,arr_len2;
    int arr1[101];
    int arr2[101];

    scanf("%d",&level);
    scanf("%d",&arr_len1);

    for(int i=0; i<arr_len1; i++)// declare array one
    {
        scanf("%d",&arr1[i]);
    }

    scanf("%d",&arr_len2);
    for(int i=0; i<arr_len2; i++)//declare array 2;
    {
        scanf("%d",&arr2[i]);
    }

    int merged[arr_len1+arr_len2];//duita array merged;

    for(int i=0; i<arr_len1; i++)//prothom ta merged;
    {
        merged[i]=arr1[i];
    }

    for(int i=0; i<arr_len2; i++)// 2nd ta merged;
    {
        merged[arr_len1+i]=arr2[i];
    }


    int m=(arr_len1+arr_len2);//m diye merged[i] er length declare kore dilalm.

    for(int i=0; i<m; i++)//remove duplicates
    {
        for(int j=i+1; j<m; j++)
        {
            if(merged[i]==merged[j])
            {
                for(int k=j; k<m; k++)
                {
                    merged[k]=merged[k+1];
                }
                m--;
                j--;
            }
        }
    }

    int r=0;

    for(int i=0;i<(m);i++)//Now,ami duita aproch e solve korte pari.1.if(marged[i]>=1 && merged[i] <=level) er modhe thakle
    {
       r++;
//       printf("%d ",merged[i]);
    }
//    printf("M = %d\n",r);
    if(r==level)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }
return 0;
}
