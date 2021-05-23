#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- && t >= 0)
    {
        int n;
        cin >> n;
        char arr[n][n];
        int x[2], y[2];
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '*')
                {
                    x[k] = i;
                    y[k] = j;
                    k++;
                }
            }
        }
        if (x[0] == 0 && x[1 == 0])
        {
            arr[n - 1][y[1]] = '*';
            arr[n - 1][y[0]] = '*';
        }
        else if (x[0] == n - 1 && x[1] == n - 1)
        {
            arr[0][y[1]] = '*';
            arr[0][y[0]] = '*';
        }
        else if (y[0] == 0 && y[1 == 0])
        {
            arr[x[1]][n - 1] = '*';
            arr[y[0]][n - 1] = '*';
        }
        else if (y[0] == n - 1 && y[1] == n - 1)
        {
            arr[x[1]][0] = '*';
            arr[x[0]][0] = '*';
        }
        else if (x[1] == x[0])
        {
            arr[x[1] + 1][y[1]] = '*';
            arr[x[1] + 1][y[0]] = '*';
        }
        else if (y[1] == y[0])
        {
            arr[x[0]][y[1] + 1] = '*';
            arr[x[1]][y[1] + 1] = '*';
        }
        else
        {
            arr[x[0]][y[1]] = '*';
            arr[x[1]][y[0]] = '*';
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}