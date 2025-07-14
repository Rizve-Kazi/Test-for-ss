#include<bits/stdc++.h>
#include<math.h>>
using namespace std;
int main()
{
    int s1,s2,s3,a,b,c;
    int area;

    cin>>s1>>s2>>s3;

    a=sqrt((s1*s3)/s2);
    b=sqrt((s1*s2)/s3);
    c=sqrt((s2*s3)/s1);

    area=4*(a+c+b);

    cout<<area<<endl;
}
