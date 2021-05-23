#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0)
    {
        cout << "YES";
        return 0;
    }
    if(n%44==0 || n%47==0 || n%74==0 || n%77==0){
        cout << "YES";
        return 0;
    }
    
    int flag = 0;
    while (1)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            n = n / 10;
            if (n == 0)
                break;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}