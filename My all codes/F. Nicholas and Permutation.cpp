#include<stdio.h>
#include<math.h>
int main()
{
   int test,len;
   int arr[21];

   scanf("%d",&test);

   while(test--)
   {
       scanf("%d",&len);
       int x=len;

       for(int i=0;i<len;i++)
       {
          scanf("%d",&arr[i]);

       }

       for(int i=0;i<len;i++)
       {
         for(int j=i+1;j<len;j++)
         {
             if(arr[i]==arr[j])
             {
                for(int k=j;k<len;k++)
                {
                  arr[k]=arr[k+1];
                }
                len--;
                j--;
             }
         }
       }
          int count=0;

       for(int i=0;i<len;i++)
       {
         count++;
       }
       printf("%d\n",x-count);



   }


}
