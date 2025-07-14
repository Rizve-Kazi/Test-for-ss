
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    string str;

    while(n--)
    {
        getline(cin,str);
        int c=0;
        int h=0;
        int n=0;
        int o=0;
        double total=0;

        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='C')
            {
                if(str[i]=='C' && (str[i+1]>='1' && str[i+1]<='9'))
                {
                    c=c+(str[i+1]*c);
                }
                else if(str[i]=='C' && (str[i+1]!>='1' && str[i]!<='9' ))
                {
                    c++;
                }
            }

            if(str[i]=='H')
            {
                if(str[i]=='H' && (str[i+1]>='1' && str[i+1]<='9'))
                {
                    h=h+(str[i+1]*h);
                }
                else if(str[i]=='H' && (str[i+1]!>='1' && str[i]!<='9' ))
                {
                    h++;
                }
            }

            if(str[i]=='O')
            {
                if(str[i]=='O' && (str[i+1]>='1' && str[i+1]<='9'))
                {
                    o=o+(str[i+1]*o);
                }
                else if(str[i]=='H' && (str[i+1]!>='1' && str[i]!<='9' ))
                {
                    o++;
                }
            }
            if(str[i]=='N')
            {
                if(str[i]=='N' && (str[i+1]>='1' && str[i+1]<='9'))
                {
                    n=n+(str[i+1]*n);
                }
                else if(str[i]=='N' && (str[i+1]!>='1' && str[i]!<='9' ))
                {
                    n++;
                }
            }
        }
        total=(c*12.01)+(h*1.008)+(O*16)+(n*14.01);

        printf("%.3lf\n",total);
    }
}
