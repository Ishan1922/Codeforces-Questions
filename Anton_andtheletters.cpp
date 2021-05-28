#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int l = s.size();

    int a[26] = {0};
    int k = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            a[s[i] - 97]++;
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != 0)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}
