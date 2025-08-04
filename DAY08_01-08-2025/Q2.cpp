#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> mat(5, vector<int>(5));
    int row, col;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
                row = i, col = j;
        }
    }
    int ops = 0;
    if (row < 2)
    {
        ops += 2 - row;
    }
    else
    {
        ops += row - 2;
    }
    if (col < 2)
    {
        ops += 2 - col;
    }
    else
    {
        ops += col - 2;
    }
    cout << ops;
    return 0;
}