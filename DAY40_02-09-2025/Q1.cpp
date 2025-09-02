#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long ans;
        if (a % b == 0)
            ans = 0;
        else
            ans = b - (a % b);
        cout << ans << '\n';
    }
    return 0;
}
