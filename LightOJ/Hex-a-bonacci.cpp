#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

const int MOD = 1000000007;
const char nl = '\n';

ll ar[10010];

ll fn(ll n)
{
    if (n == 0) return ar[0];
    if (n == 1) return ar[1];
    if (n == 2) return ar[2];
    if (n == 3) return ar[3];
    if (n == 4) return ar[4];
    if (n == 5) return ar[5];
    if(ar[n]!=0)
    {
        return ar[n];
    }
    else
    {
        return ar[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))%10000007;
    }
}

int main()
{
    fastt;
    ll t, cs=0;
    cin >> t;
    while(t--)
    {
        memset(ar, 0, sizeof ar);
        ll n;
        cs++;
        cin >> ar[0] >> ar[1] >> ar[2] >> ar[3] >> ar[4] >> ar[5] >> n;
        cout << "Case " << cs << ": " << fn(n)%10000007 << nl;
    }
    return 0;
}
