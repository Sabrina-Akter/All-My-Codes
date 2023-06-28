#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

map <ll,ll> m;

ll a, b, c;

ll dp(ll n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n<0)
    {
        return INT_MIN;
    }
    else if(m.count(n))
    {
        return m[n];
    }
    else
    {
        return m[n]=1+max(dp(n-a),max(dp(n-b), dp(n-c)));
    }
}

int main()
{
    fastt;
    ll n;
    cin >> n >> a >> b >> c;
    cout << dp(n) << endl;
    return 0;
}
