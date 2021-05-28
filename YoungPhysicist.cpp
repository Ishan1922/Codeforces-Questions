#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c1[n], c2[n], c3[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c1[i] >> c2[i] >> c3[i];
    }
    int sum1 = 0, sum2 = 0;
    int sum3 = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 + c1[i];
        sum2 = sum2 + c2[i];
        sum3 = sum3 + c3[i];
    }

    if (sum1 == 0 && sum2 == 0 && sum3 == 0){
        cout << "YES";
    }
    else cout << "NO";

        return 0;
}
