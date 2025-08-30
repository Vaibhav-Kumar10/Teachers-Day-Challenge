#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string p;
    cin >> p;
    for (char ch : p) {
        if(ch == 'H' || ch == 'Q' || ch == '9'){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}