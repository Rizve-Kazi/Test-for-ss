#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int len;

    while(cin >> len)
    {
        if(len == 0)
        {
            break;
        }

        vector<double> a(len);
        double sum = 0, rem = 0, pos = 0, neg = 0;

        for(int i = 0; i < len; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        rem = sum / len;

        for(int i = 0; i < len; i++)
        {

            double diff = floor((a[i] - rem) * 100.0 + 0.5) / 100.0;

            if(diff > 0)
            {
                pos += diff;
            }
            else
            {
                neg -= diff;
            }
        }

        double ans = min(pos, neg);

        printf("$%.2lf\n", ans);
    }
}
