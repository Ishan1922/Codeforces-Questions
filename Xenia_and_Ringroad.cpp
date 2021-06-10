#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int home[m];

    for (long long int i = 0; i < m; i++)
    {
        cin >> home[i];
    }

    long long int count = home[0]-1;
    for(long long int i=1;i<m;i++)
    {
        if(home[i]-home[i-1]>=0)
        {
            count+=home[i]-home[i-1];
        }
        else
        {
            count+=n-home[i-1]+home[i];
        }
    }


    cout << count;

    return 0;
}
