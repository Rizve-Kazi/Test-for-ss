#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[101];

    scanf("%s",&str);

    int len=strlen(str);

    int a=0,b=0,c=0,d=0;

    for(int i=0; i<len; i++)
    {
        if(str[i]=='n')
        {
            a++;
        }

        if(str[i]=='e')
        {
            b++;
        }

        if(str[i]=='i')
        {
            c++;
        }
        if(str[i]=='t')
        {
            d++;
        }
    }

    int m=(a-1)/2,n=b/3;
    int arr[4]= {m,n,c,d};
    int mini=m;

    if(n<mini)mini=n;
    if(c<mini)mini=c;
    if(d<mini)mini=d;

    cout<<mini<<endl;
}
