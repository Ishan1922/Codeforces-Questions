#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int max = -1;
    for (int i = 0; i < len; i++)
    {
        if (max < s[i])
        {
            max = s[i];
        }
    }

    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (max == s[i])
        {
            count++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        cout << char(max);
    }

    return 0;
}