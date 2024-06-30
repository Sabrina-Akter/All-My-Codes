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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // L, R, D, U, TR, BR, TL, BL
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  //

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

vector<bool> prime(100001, true);
vector<long long> Prime;

void sieveOfEratosthenes(int n) {
    prime[0] = prime[1] = false; 

    for (ll p = 2; p * p <= n; ++p) {
        if (prime[p]) {
            for (ll i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    for (ll p = 2; p <= n; ++p) {
        if (prime[p]) {
            Prime.push_back(p);
        }
    }
}

int main()
{
    fastt;
    sieveOfEratosthenes(100000);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll x = 1 + n;
        auto it1 = lb(all(Prime), x);
        ll y = (*it1) + n;
        auto it2 = lb(all(Prime), y);
        cout << (*it1) * (*it2) << nl;
    }
    return 0;
}