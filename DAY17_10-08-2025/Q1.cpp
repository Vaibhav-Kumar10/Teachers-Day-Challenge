#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; ++i)
        cin >> cards[i];

    int sereja_score = 0, dima_score = 0, left = 0, right = n - 1;
    bool sereja_turn = true;

    while (left <= right)
    {
        int card;
        if (cards[left] > cards[right])
        {
            card = cards[left];
            left++;
        }
        else
        {
            card = cards[right];
            right--;
        }
        if (sereja_turn)
            sereja_score += card;
        else
            dima_score += card;
        sereja_turn = !sereja_turn;
    }

    cout << sereja_score << " " << dima_score << endl;

    return 0;
}