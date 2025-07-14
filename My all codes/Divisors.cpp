#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    int l,m;
    int a,b;

    vector<int>arr;
    vector<int>arr2;

    while(t--)
    {
        cin>>l>>m;
        a=0,b=0;

        arr.clear();
        arr2.clear();

        for(int i=l; i<=m; i++)
        {
            a = 0;
            for(int j=1; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    a++;
                    if(j != i/j)
                    {
                        a++;
                    }
                }
            }
            arr.push_back(a);
            arr2.push_back(i);
        }

        int value=arr2[0], max=arr[0];

        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                value=arr2[i];
            }
        }

        cout<<"Between "<<l<<" and "<<m<<", "<<value<<" has a maximum of "<<max<<" divisors."<<endl;
    }
}
