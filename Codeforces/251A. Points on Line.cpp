#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)

const int MOD = 1000000007;
const char nl = '\n';

int main()
{
    fastt;
    ll n, d, i, dif, p, tp, sum=0, comb;
    cin >> n >> d;
    vll v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(i=0;i<n;i++)
    {
        dif=v[i]+d;
        auto it=ub(all(v),dif);
        p = it-v.begin();
        tp = p-i-1;
        sum+=((tp*(tp-1))/2);
    }
    cout << sum << nl;
    return 0;
}
