#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, result;
    scanf("%d %d", &n, &k);

    result=(3*n);

    if(result>=k)
    {
        cout<<result-k<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }

    return 0;
}
