#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int len;
        cin >> len;

        vector<int> v;
        int ans = 0;

        for (int i = 0; i < len; i++) {
            string s;
            cin >> s;

            if (s == "LEFT") {
                v.push_back(-1);
                ans -= 1;
            }
            else if (s == "RIGHT") {
                v.push_back(1);
                ans += 1;
            }
            else if (s == "SAME") {
                string temp;
                int idx;
                cin >> temp >> idx;

                int val = v[idx - 1];
                v.push_back(val);
                ans += val;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
