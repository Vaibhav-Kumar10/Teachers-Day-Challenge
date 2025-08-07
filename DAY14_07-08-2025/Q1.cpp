#include <bits/stdc++.h>
using namespace std;

int main()
{
    string words;
    cin >> words;
    bool isSpace = true;
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i] == 'W' && words[i + 1] == 'U' && words[i + 2] == 'B')
        {
            i += 2;
            if (isSpace == false)
                cout << " ";
            continue;
        }
        else
        {
            isSpace = false;
            cout << words[i];
        }
    }

    return 0;
}