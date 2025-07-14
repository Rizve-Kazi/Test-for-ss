    #include<bits/stdc++.h>
    #include<math.h>
    using namespace std;

    int main()
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int>());

        double sum = 0;
        for(int i = 0; i < n; i++)
        {
            double area = 3.14159 * v[i] * v[i];
            if(i % 2 == 0)
                sum += area;
            else
                sum -= area;
        }

        printf("%.10lf\n", sum);
        return 0;
    }
