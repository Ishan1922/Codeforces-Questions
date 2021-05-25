#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; //no. of teams
    cin >> n;
    int h[n], g[n]; //h for home and g for guest uniform
    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> g[i];
    }

    //logic............................................
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (h[i] == g[j] && i != j)
                count++;
        }
    }
    cout << count;
    return 0;
}
