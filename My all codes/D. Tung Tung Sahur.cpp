#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char str[101];
        char str2[101];

        cin>>str>>str2;
        int len1=strlen(str);
        int len2=strlen(str2);

        if(strcmp(str,str2)==0)
        {
            cout<<"YES\n";
        }

        else if(len2*2==len1)
        {
            int a;

            for(int i=0; i<len2; i++)
            {
                if(str2[i]==str2[i+1] && str2[i]==str[i+2])
                {
                    a++;
                }
            }
            if(a==len1)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
