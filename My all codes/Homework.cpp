#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    int b = 0, c = 0;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if(x == 0)
        {
            b++;
        }
        c += x;
    }

    if(b == n)
    {
        cout << "0\n";
    }
    else if(b < 1)
    {
        cout << "-1\n";
    }
    else
    {
        sort(v.begin(), v.end(), greater<int>());

        if(c%3==0)
        {
            for(int i = 0; i < n; i++)
            {
                cout << v[i];
            }
            cout << endl;
        }

        else
        {
            int a=3+(c%3);

            int cout=0;
            int ind=0;

            for(int i=0; i<n; i++)
            {
                if(v[i]==a)
                {
                    count++;
                    intd=i;
                }
            }

            vector<int >arr;

            for(int i=0; i<n; i++)
            {
                if(v[i]!=a)
                {
                    arr.push_back(v[i]);
                }
            }

            for(int i=0; i<ind; i++)
            {
                cout<<arr[i];
            }
            for(int i=ind; i<ind+count-1; i++)
            {
                cout<<a;
            }
            for(int i=0; i<ind+count-1; i++)
            {
                cout<<arr[i];
            }
            cout<<endl;
        }

    }

    return 0;
}
