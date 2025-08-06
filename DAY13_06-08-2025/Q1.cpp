#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double orange = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double p;
        cin >> p;
        orange += p;
    }
    double volume = orange / n;
    cout << volume;
    return 0;
}