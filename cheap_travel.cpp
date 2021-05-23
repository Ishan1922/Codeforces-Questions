#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int pay = 0;
    int pack = n / m;
    int left = n % m;

    if(left==0){
        if(n*a>pack*b)
            cout << pack*b;
        else
            cout << n*a;
        return 0;
    }
    if ((left * a) > b)
    {
        pay = (pack * b) + b;
    }
    else
        pay = pack * b + left * a;
    cout << pay;
    return 0;
}