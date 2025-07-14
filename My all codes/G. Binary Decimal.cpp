#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;

        vector<int> v;

        while (n != 0) {
            int rem = n % 10;
            n = n / 10;
            v.push_back(rem);
        }

        int maximum = v[0];

        for (int i = 1; i < v.size(); i++) {
            if (maximum < v[i]) {
                maximum = v[i];
            }
        }

        cout << maximum << endl;
    }

    return 0;
}
