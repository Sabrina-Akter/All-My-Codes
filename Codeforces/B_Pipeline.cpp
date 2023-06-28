#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll unsigned long long int
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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

ll sum(ll num)
{
    return (num*(num+1))/2;
}

int main()
{
    fastt;
    ll n, k;
    cin >> n >> k;
    n--;
    ll mx = sum(k-1);
    if(mx<n)
    {
        cout << -1 << nl;
        return 0;
    }
    ll high=k-1, low=0, mid;
    while(high>=low)
    {
        mid = (high+low)/2;
        if(mx-sum(mid)>=n)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    cout << k-1-high << nl;
    return 0;
}