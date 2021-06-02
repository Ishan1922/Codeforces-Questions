#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n] = {0};
    int p;
    cin >> p;
    int p1[p];
    for (int i = 0; i < p; i++)
    {
        cin >> p1[i];
        a[p1[i] - 1]++;
    }
    int q;
    cin >> q;
    int q1[q];
    for (int i = 0; i < q; i++)
    {
        cin >> q1[i];
        a[q1[i] - 1]++;
    }

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "I become the guy.";
    }
    else
        cout << "Oh, my keyboard!";

    return 0;
}
