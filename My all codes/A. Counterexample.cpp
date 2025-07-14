#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,r;
    scanf("%I64d %I64d",&l,&r);
    if(l%2==1)
        l++;
    if(l+2>r)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    }
    return 0;
}
