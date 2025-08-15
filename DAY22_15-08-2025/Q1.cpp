#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string statement;
        cin >> statement;
        if (statement[0] == '+')
            x++;
        if (statement[2] == '+')
            x++;
        if (statement[0] == '-')
            x--;
        if (statement[2] == '-')
            x--;
    }
    cout << x;
    return 0;
}
