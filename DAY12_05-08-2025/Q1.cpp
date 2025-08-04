#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;
    set<char> charSet;
    for (char ch : word)
        charSet.insert(ch);
    if (charSet.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}