#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f;

    cin>>a>>b>>c>>d>>e>>f;

    int x,y,z;

    x=(a-c)*(a-c)+(b-d)*(b-d);
    y=(a-e)*(a-e)+(b-f)*(b-f);
    z=(c-e)*(c-e)+(d-f)*(d-f);

    int s1=abs((x+y)-z);
    int s2=abs((x+z)-y);
    int s3=abs((z+y)-x);

    if(x+y==z || x+z==y || z+y==x)
    {
        cout<<"RIGHT"<<endl;
    }

    else if(s2>=1 && s2<=4)
    {
        cout<<"ALMOST\n";
    }

    else if(s3>=1 && s3<=4)
    {
        cout<<"ALMOST\n";
    }

    else if(s1>=1 && s1<=4)
    {
        cout<<"ALMOST\n";
    }
    else if(x+y>z && x+z>y && z+y>x)
    {
        cout<<"ALMOST"<<endl;
    }
    else
    {
        cout<<"NEITHER\n";
    }
}
