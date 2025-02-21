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

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m, x;
        cin >> n >> m;
        priority_queue <ll, vector<ll>, greater<ll>> pq;
        for(ll i = 0; i < n; i++)
        {
            cin >> x;
            pq.push(x);
        }
        vll v(m);
        for(ll i = 0; i < m; i++)
        {
            cin >> v[i];
        }

        for(ll i = 0; i < m; i++)
        {
            pq.pop();
            pq.push(v[i]);
        }
        ll sum = 0;
        while(pq.empty() == false)
        {
            sum += pq.top();
            pq.pop();
        }
        cout << sum << nl;
    }
    return 0;
}