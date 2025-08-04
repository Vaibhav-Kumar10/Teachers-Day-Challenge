#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long tnum = n;
    int luckyCnt = 0;
    while (tnum)
    {
        int digit = tnum % 10;
        tnum /= 10;
        if (digit == 7 || digit == 4)
            luckyCnt++;
    }
    if (luckyCnt == 0){
        cout << "NO";
        return 0;
    } 
    while (luckyCnt)
    {
        int digit = luckyCnt % 10;
        luckyCnt /= 10;
        if (digit != 7 && digit != 4)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}