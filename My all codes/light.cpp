#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;

    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }

        long long int root=sqrt(n);

        if(root*root==n)
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }
    }

}
