#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long long total_time = 0;
    int ch = 1;
    for (int i = 0; i < m; ++i) {
        int dh;
        cin >> dh;
        if (dh >= ch)
            total_time += dh - ch;
        else
            total_time += (n - ch) + dh;
        ch = dh;
    }
    cout << total_time << endl;
    return 0;
}