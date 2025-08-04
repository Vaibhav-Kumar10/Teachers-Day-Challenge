#include <bits/stdc++.h>
using namespace std;

string lowerCase(string str) {
    string ans = "";
    for (char ch : str)     ans += tolower(ch);
    return ans;
}

string upperCase(string str) {
    string ans = "";
    for (char ch : str)     ans += toupper(ch);
    return ans;
}
int main() {
    string word;
    cin >> word;
    int lowerCnt = 0, upperCnt = 0;
    for (char ch : word)
    {
        if (isupper(ch))    upperCnt++;
        if (islower(ch))    lowerCnt++;
    }
    if (lowerCnt >= upperCnt)   cout << lowerCase(word) << endl;
    else    cout << upperCase(word) << endl;
    return 0;
}