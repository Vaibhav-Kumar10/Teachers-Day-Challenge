#include <bits/stdc++.h>
using namespace std;

int main()
{
    string players;
    cin >> players;
    int ans = 1, cnt = 1;
    for (int i = 0; i < players.size() - 1; i++)
    {
        if (players[i] == players[i + 1])
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else
            cnt = 1;
    }
    if (ans >= 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}