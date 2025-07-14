#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v(3, vector<int>(3));

    // Input the matrix
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> v[i][j];
        }
    }

    // Let's find values for v[0][0], v[1][1], and v[2][2] such that row sums are equal
    // Assume we want all rows to have the same sum

    int sum_row1 = v[0][1] + v[0][2];
    int sum_row2 = v[1][0] + v[1][2];
    int sum_row3 = v[2][0] + v[2][1];

    // Calculate the missing diagonal elements
    // Let's suppose target row sum = x
    // Then:
    // v[0][0] + sum_row1 = x
    // sum_row2 + v[1][1] = x
    // sum_row3 + v[2][2] = x

    // Set the middle value as:
    v[1][1] = (sum_row3 + sum_row1 - sum_row2) / 2;

    // Now compute the full row sum
    int target = sum_row2 + v[1][1];

    // Now compute v[0][0] and v[2][2]
    v[0][0] = target - sum_row1;
    v[2][2] = target - sum_row3;

    // Print the completed matrix
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
