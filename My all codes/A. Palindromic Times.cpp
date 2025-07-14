#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hour,mins;
    char ch;
    cin>>hour>>ch>>mins;

    while(1)
    {
        mins++;

        if(mins%60==0)
        {
            hour++;
            mins=mins%60;
        }

        int h=hour%24;
        int m=mins;


        if(h%10==m/10 && h/10==m%10)
        {
            printf("%02d:%02d\n",h,m);
            return 0;
        }
    }
    return 0;
}
