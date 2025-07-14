#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) {
        cin >> b[i];
        a[i] = i + 1;
    }

    int l = 0;
    while(l < n && a[l] == b[l]) {
        l++;
    }

    if(l == n) {
        cout << "0 0\n";
        return 0;
    }

    int r = n - 1;
    while(r >= 0 && a[r] == b[r]) {
        r--;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    if(a == b) {
        cout << l + 1 << " " << r + 1 << endl;
    }
    else {
        cout << "0 0\n";
    }

    return 0;
}
