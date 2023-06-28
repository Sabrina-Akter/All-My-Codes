#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
ll m = 1000000007;

ll n, i, N;
ll x=1, y=1, p;
int main()
{
    cin >> n;
    N = 3*n;
    for(i=1;i<N;i++)
    {
        x = (x*3)%m;
        if(i<=n)
        {
            y = (y*7)%m;
        }
    }
    p = ((3*x)-y+m)%m;
    cout << fixed << setprecision(0) << p << endl;
    return 0;
}

