#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y; //x and y coordinates
    int x1[101] = {0}, y1[101] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        x1[x]++;
        y1[y]++;
    }

    int countx = 0, county = 0;

    for (int i = 0; i < 101; i++)
    {
        if (x1[i] != 0)
            countx++;
    }
    for (int i = 0; i < 101; i++)
    {
        if (y1[i] != 0)
            county++;
    }

    cout << fmin(countx, county);

    return 0;
}
