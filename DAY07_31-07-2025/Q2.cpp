#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string word;
        cin >> word;
        int l = word.size();

        if (l <= 10)
            cout << word << endl;
        else
            cout << word[0] << l - 2 << word[l - 1] << endl;
    }
    return 0;
}