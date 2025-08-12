#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    long long t_drink = (k * l) / nl;
    long long t_limes = c * d;
    long long t_salt = p / np;
    long long total_toasts = min({t_drink, t_limes, t_salt});
    long long toasts_per_friend = total_toasts / n;
    cout << toasts_per_friend << endl;
    return 0;
}