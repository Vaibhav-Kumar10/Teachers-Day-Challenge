#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, ans;
    cin >> n;

    if (n % 2 == 0) {
        ans = n / 2;
    } else {
        ans = -(n + 1) / 2;
    }

    cout << ans;

    return 0;
}