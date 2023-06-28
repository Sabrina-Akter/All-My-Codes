#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

const ll X = 200;

void f(ll i,ll j,ll x,ll y,ll A[X][X])
{
    if(i>=x)
    {
        return;
    }
    if(j>=y)
    {
        cout << endl;
        return f(i+1, 0, x, y, A);
    }
    else
    {
        cout << A[i][j] + A[i+x][j] << " ";
        return f(i, j+1, x, y, A);
    }
}

int main()
{
    fastt;
    ll x, y, i, j;
    cin >> x >> y;
    ll A[X][X];
    for(i=0;i<(x*2);i++)
    {
        for(j=0;j<y;j++)
        {
            cin >> A[i][j];
        }
    }
    f(0, 0, x, y, A);
    return 0;
}
