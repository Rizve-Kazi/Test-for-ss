#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    while(cin >> n >> m)
    {
        vector<vector<int>> v(n, vector<int>(m));

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }

        int a = 0;

        for(int i = 0; i < n; i++)
        {
            int c = 0;

            for(int j = 0; j < m; j++)
            {
                if(v[i][j] >= 1)
                {
                    c++;
                }
            }

            if(c == m)
            {
                a++;
            }
        }

        cout << a << endl;
    }
}
