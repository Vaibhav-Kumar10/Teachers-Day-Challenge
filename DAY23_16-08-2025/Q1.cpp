#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 0, ans = INT_MAX;
    cin >> x;
    int arr[] = {1, 2, 3, 4, 5};
    for (int el : arr)
    {
        ans = min(ans, (x + el - 1) / el);
    }
    cout << ans;
    return 0;
}
