#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    int arr1[n],arr2[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr1[i]>>arr2[i];
    }


    int temp;
    int temp2;

    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(arr1[i]>arr1[i+1])
            {
                temp=arr1[i];
                arr1[i]=arr1[i+1];
                arr1[i+1]=temp;

                temp2=arr2[i];
                arr2[i]=arr1[i+1];
                arr2[i+1]=temp2;
            }
        }
    }


//    for(int i=0; i<n; i++)
    {
        for(int i=0; i<n; i++)
        {
            cout<<arr1[i] <<"\t"<<arr2[i]<<endl;
        }
    }
//    cout<<"YES"<<endl;
    return 0;
}
