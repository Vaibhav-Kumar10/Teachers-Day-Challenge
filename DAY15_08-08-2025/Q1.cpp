#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    unordered_map<int, int> mpp;
    for (int el : {a, b, c, d})
        mpp[el]++;
    int ans = 0;
    for (auto it : mpp)
        if (it.second > 1)
            ans += it.second - 1;
    cout << ans;
    return 0;
}