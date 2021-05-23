#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int minleft = 240 - k;
    int minreq = 0;
    
    for (int i = 1; i <= n; i++)
    {
        minreq = minreq + 5 * i;
        if(minreq>minleft){
            cout << i-1;
            return 0;
        }
    }

    cout << n;

    return 0;
}