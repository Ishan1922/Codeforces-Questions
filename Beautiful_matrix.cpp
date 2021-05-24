#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    //input........................................
    int posx=0, posy=0;     //position in x and y direction respectively
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1){
                posx=j;
                posy=i;
            }
        }
    }
    int moves=0;
    moves = abs(posx-2) + abs(posy-2);

    cout << moves;

    return 0;
}
