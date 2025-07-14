#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int sum=0;
    for(int i=1; i<=10000; i++)
    {
        sum=((i)*(i+1))+((i*10)*((i+1)*10));

        if(sum==number)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
}
