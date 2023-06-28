#include <bits/stdc++.h>
using namespace std;

#define fastt                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)

const int MOD = 1000000007;
const char nl = '\n';

int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // King's Moves
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; // King's Moves

int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move

int main()
{
    fastt;
    ll t, cs = 0;
    cin >> t;
    while (t--)
    {
        cs++;
        cout << "CASE " << cs << ": ";
        ll n, g, i, j, k, sum = 0, SUM = 0, d, flag = 0;
        unordered_map<ll, ll> m;
        vll v, P;
        string s;
        cin >> n >> g;
        for (i = 0; i < n; i++)
        {
            cin >> s;
            sum = 0;
            for (j = 0; j < s.size(); j++)
            {
                sum += s[j] - 96;
            }
            if (m[sum] == 0)
            {
                m[sum] = 1;
                v.pb(sum);
            }
        }
        sort(all(v));
        for(i=0;i<v.size();i++)
        {
            for(j=i+1;j<v.size();j++)
            {
                SUM = v[i]+v[j];
                P.pb(SUM);
                m[SUM]=1;
            }
        }
        sort(all(P));
        if(P.size()>1)
        {
            for(i=0;i<P.size();i++)
            {
                d = g-P[i];
                if(m[d]==1)
                {
                    cout << "YES" << nl;
                    flag=1;
                    break;
                }
                if(flag==1)
                {
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}