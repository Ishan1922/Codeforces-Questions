#include <bits/stdc++.h>
using namespace std;

string arrange(string s)
{
    int l = s.size();
    for (int i = 0; i < l - 1; i++)
    {
        if (s[i] == 'B' && s[i + 1] == 'G')
        {
            s[i] = 'G';
            s[i + 1] = 'B';
            i++;
        }
    }
    return s;
}
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    for (int i = 0; i < t; i++)
    {
        s = arrange(s);
    }
    cout << s;

    return 0;
}
