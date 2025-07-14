#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[3];
    int arr2[3];

    for(int i=0; i<3; i++)
    {
        cin>>arr[i]>>arr2[i];
    }

    for(int i=0; i<3; i++)
    {
        if(arr[i]==n)
        {
            n=arr2[i];
        }
        else if(n==arr2[i])
        {
            n=arr[i];
        }
    }
    cout<<n<<endl;
}
