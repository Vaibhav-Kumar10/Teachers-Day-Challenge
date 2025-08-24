#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    char prevEnd = ' '; 
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (prevEnd == ' ') {
            prevEnd = str[1];
            cnt++;
        }
        else {
            if (str[0] == prevEnd)
                cnt++;
            prevEnd = str[1];
        }
    }
    cout << cnt;
    return 0;
}
