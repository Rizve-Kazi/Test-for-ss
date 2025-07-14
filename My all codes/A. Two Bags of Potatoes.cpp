#include <bits/stdc++.h>
using namespace std;

const int N=1e5;

int main()
{
    int y, k, n;
    cin >> y >> k >> n;

    // int m = 0;
    // int arr[n];
    vector<int>v;
    if(y==n)
    {
        cout<<-1<<'\n';
        return 0;
    }

    for (int i = k ; i <=n; i+=k)
    {
        if((i/k)>N)break;
        if ((i ) % k == 0 and (i-y)>0)
        {
            v.push_back(i -y);
        }
    }

    if (v.size()==0)
    {
        cout << "-1\n";
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
//            if(v[i]!=0)
                cout << v[i] << " ";
        }
        cout <<'\n';
    }

    return 0;
}
