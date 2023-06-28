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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll n, q, i, j=0, t, a, sum=0;
    cin >> n >> q;
    unordered_map <ll, ll> m;
    vector <ll> v;
    for(i=0;i<q;i++)
    {
        cin >> t >> a;
        if(t==1)
        {
            v.pb(a);
        }
        if(t==1)
        {
            sum++;
            cout << sum << nl;
            m[a]++;
        }
        else if(t==2)
        {
            sum-=m[a];
            cout << sum << nl;
            m[a] = 0;
        }
        else if(t==3)
        {
            for(;j<a;j++)
            {
                if(m[v[j]]!=0)
                {
                    sum--;
                    m[v[j]]--;
                }
            }
            j--;
            cout << sum << nl;
        }
    }
    return 0;
}