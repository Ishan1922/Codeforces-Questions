#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        int a = n - (n % 10);
        a = a / 10;

        int b = n - (n % 100) + 10 * (n % 10);
        b = b / 10;

        if (a > b)
        {
            cout << a;
        }
        else
            cout << b;

        return 0;
    }
    else
    {
        cout << n;
    }
    return 0;
}
