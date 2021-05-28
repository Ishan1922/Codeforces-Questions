#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int sell[m];
    for (int i = 0; i < m; i++)
    {
        cin >> sell[i];
    }
    sort(sell, sell + m);

    int min = sell[n - 1] - sell[0];
    for (int i = 0; i <= m - n; i++)
    {
        if ((sell[i + n - 1] - sell[i]) < min)
            min = sell[i + n - 1] - sell[i];
    }

    cout << min;
    return 0;
}
