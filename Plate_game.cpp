#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, r;
    cin >> a >> b >> r;
    int min = fmin(a, b);
    if (2 * r > min)
    {
        cout << "Second";
    }
    else
        cout << "First";

    return 0;
}