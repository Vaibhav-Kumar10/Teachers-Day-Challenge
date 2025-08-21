#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long odd_cnt = (n + 1) / 2;
    if (k <= odd_cnt)
        cout << 2 * (k - 1) + 1 << endl;
    else
        cout << 2 * (k - odd_cnt) << endl;
    return 0;
}