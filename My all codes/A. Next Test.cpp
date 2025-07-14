#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxi=arr[0];
    int mini=arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }

    sort(arr,arr+n);

    for(int i=mini; i<=maxi; i++)
    {
        if(n==2 && arr[i]==1 && arr[i]==2)
        {
            cout<<"3\n";
            return 0;
        }
       else  if(arr[i-mini]==3 && arr[i-mini]==2 && arr[i-mini]!=1)
        {
            cout<<"1\n";
            return 0;
        }

        else if(arr[i-mini]==3 && arr[i-mini]==1 && arr[i-mini]!=2)
        {
            cout<<"2\n";
            return 0;
        }
        else if(arr[i-mini]==1 && arr[i-mini]==2 && arr[i-mini]!=3)
        {
            cout<<"3\n";
            return 0;
        }
        else if(arr[i-mini]==1 && arr[i-mini]!=2 && arr[i-mini]!=3)
        {
            cout<<"2\n";
            return 0;
        }

        else if(arr[i-mini]==3 && arr[i-mini]!=2 && arr[i-mini]!=1)
        {
            cout<<"1\n";
            return 0;
        }

        else if(arr[i-mini]==2 && arr[i-mini]!=3 && arr[i-mini]!=1)
        {
            cout<<"2\n";
            return 0;
        }
        else if(arr[i-mini]!=3 && arr[i-mini]!=2 && arr[i-mini]!=1)
        {
            cout<<"1\n";
            return 0;
        }
        if(arr[i-mini]!=i)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<maxi+1<<endl;
}
