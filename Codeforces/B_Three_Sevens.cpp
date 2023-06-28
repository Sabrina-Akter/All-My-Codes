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
        ll n, i, j;
        cin >> n;
        unordered_map <ll, ll> m, test, done;
        vector<vector<ll>> v;
        for(i=0;i<n;i++)
        {
            vector<ll> vx;
            ll x, num;
            cin >> x;
            for(j=0;j<x;j++)
            {
                cin >> num;
                vx.pb(num);
                m[num]++;
            }
            v.pb(vx);
        }
        vll ANS;
        ll ans, f=0, d;
        for(i=0;i<v.size();i++)
        {
            ans = -1, d=0;
            for(j=0;j<v[i].size();j++)
            {
                test[v[i][j]]++;
                if(test[v[i][j]]==m[v[i][j]] && done[v[i][j]]==0 && d==0)
                {
                    ans = v[i][j];
                    done[v[i][j]] = 1;
                    d=1;
                }
            }
            if(ans==-1)
            {
                f=1;
                break;
            }
            ANS.pb(ans);
        }
        if(f==1)
        {
            cout << -1 << nl;
        }
        else
        {
            for(i=0;i<ANS.size();i++)
            {
                cout << ANS[i] << " ";
            }
            cout << nl;
        }
    }
    return 0;
}