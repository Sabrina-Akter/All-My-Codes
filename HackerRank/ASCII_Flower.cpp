#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

const char nl = '\n';

int main()
{
    fastt;
    ll r, c, i, j;
    cin >> r >> c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout << "..O..";
        }
        cout << nl;
        for(j=0;j<c;j++)
        {
            cout << "O.o.O";
        }
        cout << nl;
        for(j=0;j<c;j++)
        {
            cout << "..O..";
        }
        cout << nl;
    }
    return 0;
}