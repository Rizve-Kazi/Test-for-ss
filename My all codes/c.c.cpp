#include<bits/stdc++.h>
using namespace std;

int main()
{
    int range;
    int a, b;
    cin >> range;

    int arr1[range];
    int arr2[range];

    int j = 0, k = 0;

    for (int i = 0; i < range; i++)
    {
        cin>>arr1[i]>>arr2[i];
    }

    for (int i = 0; i < range; i++)
    {
        if(arr1[i]!=arr2[i])
        {
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }

    cout<<"Poor Alex"<<endl;

    return 0;
}
