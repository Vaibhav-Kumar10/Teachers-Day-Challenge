#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string words;
    cin >> words;
    for (int k = 0; k < t; k++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (words[i] == 'B' && words[i + 1] == 'G')
            {
                swap(words[i], words[i + 1]);
                i++;
            }
        }
    }
    cout << words;
    return 0;
}