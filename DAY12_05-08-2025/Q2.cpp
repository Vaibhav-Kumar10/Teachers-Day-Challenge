#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    char prev = ' ';
    while (n--)
    {
        char cur;
        cin >> cur;
        if (prev == cur)
            ans++;
        prev = cur;
    }
    cout << ans;
    return 0;
}