#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int c=0;


    while(cin>>n>>m)
    {
        if(n==0 || m==0)
        {
            break;
        }

        vector<vector<char>>str(n,vector<char>(m));

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>str[i][j];
            }
        }

        c++;

        cout << "Field #" << c << ":" << endl;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<str[i][j];
            }
            cout<<endl;
        }

    }
}
