#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2 || y1 == y2) //elements from the same row/column are given
    {
        if (x1 == x2)
        {
            int d = y2 - y1;
            cout << x1 + d << " " << y1 << " " << x2 + d << " " << y2;
        }
        else
        {
            int d = x2 - x1;
            cout << x1 << " " << y1 + d << " " << x2 << " " << y2 + d;
        }
    }
    else //daigonal elements are given
    {
        if (abs(y1 - y2) == abs(x1 - x2))
        {
            cout << x1 << " " << y2 << " " << x2 << " " << y1;
        }
        else{
            cout << -1;
        }
    }
    return 0;
}
