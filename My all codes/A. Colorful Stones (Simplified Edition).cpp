#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[55],str2[55];

    cin>>str>>str2;

    int len=strlen(str2);

    int j=0;

    for(int i=0;i<len;i++)
    {
        if(str[j]==str2[i])
        {
            j++;
        }
    }
    cout<<j+1<<endl;
    return 0;
}
