#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;

     while(1)
     {
         int range;
         cin>>range;
         int arr[range];

         if(range==0)
         {
             break;
         }

         c++;

         int a=0;
         int b=0;

         for(int i=0;i<range;i++)
         {
             cin>>arr[i];
         }
         for(int i=0;i<range;i++)
         {
             if(arr[i]==0)
             {
                 a++;
             }
             else
             {
                 b++;
             }
         }
         cout<<"Case " <<c<<": "<<b-a<<endl;
     }
}
