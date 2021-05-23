#include <iostream>
#include <string.h>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

long long int sqsum(int *a, int n);
void ascending(int *a, int n);

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    
    int sum[n / 2];

    for (int i = 0; i < n / 2; i++)
    {
        sum[i] = 0;
    }

    for (int i = 0; i < n / 2; i++)
    {
        sum[i] = a[i] + a[n - i - 1];
    }

    long long int squaresum = sqsum(sum, n / 2);
    cout << squaresum;

    return 0;
}

long long int sqsum(int *a, int n)
{
    long long int sq = 0;
    for (int i = 0; i < n; i++)
    {
        sq = sq + (a[i] * a[i]);
    }
    return sq;
}
void ascending(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
}