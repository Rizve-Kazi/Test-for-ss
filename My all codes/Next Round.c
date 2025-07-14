 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int n,count=0,k;
     int arr[51];
     scanf("%d %d",&n,&k);

     for(int i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);

     }
     for(int j=0;j<n;j++)
     {

       if(arr[j]>=arr[k-1] && arr[j]>0)
         {
             count++;
         }

     }
     printf("%d\n",count);
 }
