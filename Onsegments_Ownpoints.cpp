#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < 100; i++)
    {
        a[i] = 1;
    }

    int l0,r0;
    cin >> l0 >> r0;
    int l, r;
    for (int i = 0; i < n-1; i++)
    {
        cin >> l >> r;
        for (int i = l; i < r; i++)
        {
            a[i] = 0;
        }
    }
    int sum=0;
    for (int i = l0; i < r0; i++)
    {
        sum = sum + a[i];
    }
    cout << sum;

    return 0;
}