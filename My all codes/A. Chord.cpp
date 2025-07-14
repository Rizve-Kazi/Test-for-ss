#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[24][2]= {'C', 'C#', 'D', 'D#', 'E', 'F', 'F#', 'G', 'G#', 'A', 'B', 'H'};

    int a1,a2,b1,b2,c1,c2;
    char s1,s2,s3;
    cin>>s1>>s2>>s3;

    int r1,r2,m,n;

    for(int i=0; i<24; i++)
    {
        if(str[i]==s1)
        {
            a1=i+1;

        }
        if(str[i]==s2)
        {
            b1=i+1;
        }
        if(str[i]==s3)
        {
            c1=i+1;
        }
    }

    a2=24-b1+a1+1;

    {
        if(a1>=a2)
        {
            r1=b1-a1;
            m=c1-b1;

        }
        else if(a2>a1)
        {
            r1=a2;
            m=24-b1-c1+1;
        }
    }

    if(r1>m)
    {
        cout<<"major"<<endl;
    }
    else if(m>r1)
    {
        cout<<"minor"<<endl;
    }
    else if(r1==m)
    {
        cout<<"strange"<<endl;
    }
    return 0;
}
