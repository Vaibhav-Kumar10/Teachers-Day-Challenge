#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    if (scores[k-1] != 0)
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (scores[i] >= scores[k-1])
                ans++;
        }
        cout << ans;
    }
    else
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (scores[i] != 0)
                ans++;
        }
        cout << ans;
    }
    return 0;
}