#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> lucky_numbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (int lucky_num : lucky_numbers) {
        if (n % lucky_num == 0) {
            cout << "YES" << endl;
            return 0; 
        }
    }
    cout << "NO" << endl;
    return 0;
}