#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a = 0, d = 0;
    cin >> n;
    string games;
    cin >> games;
    for (char ch : games) {
        if (ch == 'A')
            a++;
        if (ch == 'D')
            d++;
    }
    if (a > d)
        cout << "Anton";
    else if (d > a)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}
