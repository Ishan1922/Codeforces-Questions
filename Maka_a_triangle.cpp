#include <iostream>
#include <string.h>
using namespace std;

void ascending(int *a, int n);

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    ascending(a,3);
    int min=0;
    if(a[0]+a[1]<=a[2]){
        min = a[2]-a[1]-a[0]+1;
    }
    cout << min;

    return 0;
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