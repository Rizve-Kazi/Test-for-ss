
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        vector<long long int> v;

        for(int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
        }

        for(int i = 0; i < n; i++)
        {
            long long a = sqrt(v[i]);
            int count = 0;
            int a=0;

            if(a * a == v[i])
            {
                for(int j = 1; j*j <=(a); j++)
                {
                    if(a % j == 0)
                    {
                        count++;
                    }
                    if(v[j]==1)
                    {
                        cout<<"NO\n";
                        continue;
                    }
                }

                if(count == 1)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

