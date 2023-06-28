#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000

int main()
{
    fastt;
    ll X[] = {-1, 1,  0, 0, -1, -1,  1, 1};
    ll Y[] = {0,  0, -1, 1, -1,  1, -1, 1};
    ll x1, y1, x2, y2, x_max, y_max, i, j, k;
    set <pair<ll, ll> > s;
    cin >> x1 >> y1 >> x2 >> y2;
    x_max = max(x1, x2)+1;
    y_max = max(y1, y2)+1;
    for(i=1;i<x_max;i++)
    {
        for(j=1;j<y_max;j++)
        {
            for(k=0;k<8;k++)
            {
                if(i+k<1 || j+k<1 || i+k>=x_max || j+k>=y_max)
                {
                    continue;
                }
            }
        }
    }
    return 0;
}
