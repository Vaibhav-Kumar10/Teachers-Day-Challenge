#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int p;
        cin >> p;
        arr[p] = i;
    }
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    return 0;
}