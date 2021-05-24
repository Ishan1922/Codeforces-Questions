#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int seconds = 0;
    //find the max number
    int max = a[0];
    int posmax = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i]) //use ">" and not ">=" as find the max number that comes first
        {               //to get minimum seconds
            max = a[i];
            posmax = i;
        }
    }

    //find the min height
    int min = a[0];
    int posmin = 0;
    for (int i = 0; i < n; i++)
    {
        if (min >= a[i]) //use ">=" sign as if two min number exist u can find the last one
        {                //to get minimum seconds
            min = a[i];
            posmin = i;
        }
    }

    //case 1
    if (posmin > posmax)
    {
        seconds = posmax + ((n - 1) - posmin);
    }
    else
    {
        seconds = posmax + ((n - 1) - posmin) - 1; // as the posmin has shifted towards right by 1 position
    }

    cout << seconds;
    return 0;
}
