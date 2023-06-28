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
    ll n,a,b,i,sum=0;
    cin >> n >> a >> b;
    for(i=1;i<=n;i++)
    {
        if(i>a && (n-i)<=b)
        {
            sum++;
        }
    }
    cout << sum << nl;
    return 0;
}
