#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = n / 4; // Full "abcd" chunks
    int r = n % 4; // Remaining characters

    // Print "abcd" a times
    for(int i = 0; i < a; i++)
    {
        cout << "abcd";
    }

    if(r == 1)
    {
        cout << "a";
    }
    else if(r == 2)
    {
        cout << "ab";
    }
    else if(r == 3)
    {
        cout << "abc";
    }

    cout << endl;
    return 0;
}
