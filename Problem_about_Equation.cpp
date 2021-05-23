#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //input......................................
    int n, b;
    cin >> n;
    cin >> b;
    double a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //logic.....................................
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    sum = double(sum + b);
    sum = double(sum / n);
    //cout << sum;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > sum)
        {
            cout << "-1";
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout <<fixed << setprecision(6) << sum - a[i] << endl;
    }

    return 0;
}