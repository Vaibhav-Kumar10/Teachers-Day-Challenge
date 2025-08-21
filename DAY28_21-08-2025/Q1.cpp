#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 0;
    for (int i = 0; i < n; i++){
        int count = 1;
        for (int j = i - 1; j >= 0 && arr[j] <= arr[j + 1]; j--)
            count++;
        for (int j = i + 1; j < n && arr[j] <= arr[j - 1]; j++)
            count++;
        ans = max(ans, count);
    }
    cout << ans << endl;
    return 0;
}
