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

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, j, k, mx, num, flag=0;
        cin >> n;
        vector <pair<ll, ll> > v(n);
        for(i=0;i<n;i++)
        {
            cin >> k;
            vll p(k);
            mx = -5;
            for(j=0;j<k;j++)
            {
                cin >> p[j];
                mx = max(mx, (p[j]-j+1));
            }
            v[i]={mx,k};
        }
        sort(all(v));
        ll l = v[0].first, r = v[n - 1].first;
        ll ans = 1e12;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll curr = mid;
            bool ok = 1;
            for (int i = 0; i < n; i++)
            {
                if (curr >= v[i].first)
                {
                    curr += v[i].second;
                }
                else
                {
                    ok = 0;
                    break;
                }
            }
            if (ok)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << endl;
    }
    return 0;
}