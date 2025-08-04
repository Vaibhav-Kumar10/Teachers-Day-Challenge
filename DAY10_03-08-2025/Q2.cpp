#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int l = str.size();

    map<char, int> freq;
    for (char ch : str)
    {
        if (ch != '+')
            freq[ch]++;
    }
    int cntPlus = 0;
    for (auto it : freq)
    {
        while (it.second != 0)
        {
            cout << it.first;
            it.second--;
            if (cntPlus < l / 2)
                cout << '+';
            cntPlus++;
        }
    }
    return 0;
}