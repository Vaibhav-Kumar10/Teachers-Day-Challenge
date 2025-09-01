#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int minId = 0, maxId = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i] > arr[maxId])
            maxId = i;
        else if(arr[i] <= arr[minId])
            minId = i;
    }
    int changes = maxId + (n - minId - 1);
    if(maxId > minId)
        changes--;
    cout << changes;
    return 0;
}