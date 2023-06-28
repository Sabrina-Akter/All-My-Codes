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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

bool f(pair<ll, ll> a, pair<ll, ll> b)
{
    if(a.first!=b.first)
    {
        return a.first<b.first;
    }
    else 
    {
        return a.second>b.second;
    }
}


int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, p, q, i, a, b;
        vector <pair<ll, ll> > v, v1;
        vector <string> v2;
        cin >> n;
        string s, S;
        for(i=0;i<n;i++)
        {
            cin >> s >> p >> q;
            v.pb({p, q});
            v1.pb({p, q});
            v2.pb(s);
        }
        sort(v.begin(), v.end(), f);
        a = v[n-1].first, b = v[n-1].second;
        for(i=0;i<v1.size();i++)
        {
            if((a==v1[i].first) && (b==v1[i].second))
            {
                cout << v2[i] << nl;
                break;
            }
        }
    }
    return 0;
}
