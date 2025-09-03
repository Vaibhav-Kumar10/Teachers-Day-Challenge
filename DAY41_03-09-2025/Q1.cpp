#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    long long sx = 0, sy = 0, sz = 0;
    for (int i = 0; i < n; ++i) {
        long long x, y, z;
        cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
    }

    cout << ((sx == 0 && sy == 0 && sz == 0) ? "YES" : "NO");
    return 0;
}
