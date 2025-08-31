#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int curMin = arr[0], curMax = arr[0], cnt = 0;

    for (int i = 1; i < n; i++) {
        if(arr[i] > curMax){
            cnt++;
            curMax = arr[i];
        }
        else if(arr[i] < curMin){
            cnt++;
            curMin = arr[i];
        }
    }
    cout << cnt;
    return 0;
}