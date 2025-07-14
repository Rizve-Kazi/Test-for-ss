#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while(n--) {
        string str;
        getline(cin, str);

        int len = str.size();
        int a = sqrt(len);

        if (a * a != len) {
            cout << "INVALID" << endl;
            continue;
        }

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                cout << str[j* a + i];
            }
        }
        cout << endl;
    }
    return 0;
}
