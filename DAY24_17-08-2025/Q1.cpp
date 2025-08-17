#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int sn = w * (2 * k + (w - 1) * k) / 2;
    int borrow = sn - n;
    if (borrow <= 0)
        cout << 0;
    else
        cout << borrow;
    return 0;
}