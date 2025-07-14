#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (s == "0001") {
            printf("0 1\n");
        }
        else if (s.size() != 4) {
            cout << -1 << endl;
        }
        else {
            int num = stoi(s);
            int ans = sqrt(num);
            int r = ans / 2;

            if (num == (ans * ans)) {
                if ((r+r) == ans) {
                    cout << r << " " << r << endl;
                }
                else {
                    cout << r << " " << r + 1 << endl;
                }
            }
            else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
