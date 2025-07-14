#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];

    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    for(int j=1;j<=a;j++)
    {
        for(int i=0;i<a;i++)
        {
            if(arr[i]==j)// 2 3 4 1
            {
                cout<<i+1<<" ";
            } // 4 1 2 3

        }
    }
    cout<<endl;

}
