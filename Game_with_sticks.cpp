#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int win = 1;
    //1 for akshat and 2 for malvika
    int points;
    while (1)
    {
        points = (n * m) - n - m + 1;
        if (points == 0)
            break;
        n = n - 1;
        m = m - 1;
        if (win == 1)
            win = 2;
        else
            win = 1;
    }

    if (win == 1)
    {
        cout << "Akshat";
    }
    else
        cout << "Malvika";

    return 0;
}
