#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll x, y, i, j, fx, fy, sx, sy, ex, ey;
        cin >> x >> y;
        char A[x][y];
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                cin >> A[i][j];
                if(A[i][j]=='S')
                {
                    sx = i;
                    sy = j;
                }
                if(A[i][j]=='F')
                {
                    fx = i;
                    fy = j;
                }
                if(A[i][j]=='E')
                {
                    ex = i;
                    ey = j;
                }
            }
        }
    }
    return 0;
}
