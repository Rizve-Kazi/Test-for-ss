#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;

    for(int i=2; i<=10000000; i++) // reduced upper limit for performance
    {
        int count = 0;
        for(int j=2; j<=i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
            if(count > 1)
            {
                v.push_back(i);
                break; // avoid pushing multiple times
            }
        }
    }

    vector<int>arr;

    for(int i=1; i<=10000000; i++) // also reduced for performance
    {
        bool flag = true;
        for(int j=0; j<v.size(); j++)
        {
            if(v[j] != i && i % v[j] == 0)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            arr.push_back(i);
        }
    }

    if(arr.size() > 1500)
        cout << arr[1500] << endl;
    else
        cout << "Not enough elements in v" << endl;

    return 0;
}
