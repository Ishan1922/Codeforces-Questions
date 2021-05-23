#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    if (m>n){
        cout << "-1";
        return 0;
    }

    int move = n/2 + n%2;
    while(move%m!=0){
        move++;
    }
    cout << move;
    return 0;
}