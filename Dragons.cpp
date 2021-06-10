#include <bits/stdc++.h>
using namespace std;

void ascending(int *a, int *b, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
                int d = b[i];
                b[i] = b[j];
                b[j] = d;
            }
        }
    }
}

int main()
{
    int s, n;
    cin >> s >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    //logic...........................................
    //arranging in ascending order
    ascending(x,y,n);

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s > x[i])
        {
            s = s + y[i];
        }
        else
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
