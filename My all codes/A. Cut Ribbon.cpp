#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    int arr[10000];
    int m=0;

    {
        if(n%a==0)
        {
            int s1=n/a;
            arr[m++]=s1;
        }
        if(n%b==0)
        {
            int s2=n/b;
            arr[m++]=s2;
        }
        if(n%c==0)
        {
            int s3=n/c;
            arr[m++]=s3;
        }
        if((n%(a+b))==0)
        {
            int s4=n/(a+b);
            arr[m++]=s4*2;
        }
        if((n%(a+c))==0)
        {
            int s5=n/(a+c);
            arr[m++]=s5*2;
        }
        if((n%(b+c))==0)
        {
            int s6=n/(b+c);
            arr[m++]=s6*2;
        }

    }

    int max=arr[0];

    for(int i=0; i<m; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<max<<endl;

    return 0;
}
