#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int r = m - 1;
    for (int i = 0; i < n; i++) {
        bool flag = true;
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0)
                cout << "#";
            else if (j == r && flag == true) {
                cout << "#";
                if (r == 0) 
                    r = m - 1;
                else
                    r = 0;
                flag = false;
            }
            else
                cout << ".";
        }
        cout << endl;
    }
    return 0;
}