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
#define pll pair<ll,ll>
#define plll pair<pll,ll>

const int MOD = 1000000007;
const char nl = '\n';

void decToBinary(ll n)
{
    ll flag=0;
    for (ll i = 62; i >= 0; i--) 
    {
        ll k = n >> i;
        if (k & 1)
        {
            cout << "2";
            flag=1;
        }
        else
        {
            if(flag==1)
            {
                cout << "0";
            }
        }
    }
}

int main()
{
    fastt;
    ll n;
    cin >> n;
    decToBinary(n);
    return 0;
}