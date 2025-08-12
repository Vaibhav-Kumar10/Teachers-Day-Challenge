#include <bits/stdc++.h>
using namespace std;

int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string name;
    cin >> name;
    int total = 0;
    char cur = 'a';
    for (char t : name)
    {
        int diff = abs(cur - t);
        int rotations = min(diff, 26 - diff);
        total += rotations;
        cur = t;
    }
    cout << total << endl;
    return 0;
}