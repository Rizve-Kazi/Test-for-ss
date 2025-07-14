#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, r;
    cin >> a >> b >> r;

    int c = 2 * r;

    int rows = a / c;
    int cols = b / c;

    int total = rows * cols;

    if (total % 2 == 1) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }

    return 0;
}
