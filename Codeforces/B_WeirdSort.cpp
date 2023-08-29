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
        ll n, m, i, x;
        cin >> n >> m;
        vll v(n), s(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            s[i] = v[i];
        }
        map <ll, ll> mp;
        for(i=0;i<m;i++)
        {
            cin >> x;
            mp[x-1] = 1;
        }
        sort(all(s));
        while(1)
        {
            ll flag=0, change=0;
            for(i=0;i<n;i++)
            {
                if(i+1<n)
                {
                    if(v[i]>v[i+1] && mp[i]==1)
                    {
                        swap(v[i], v[i+1]);
                        change=1;
                    }
                }
                if(v[i]!=s[i])
                {
                    flag = 1;
                }
            }
            if(change==0)
            {
                if(flag==1)
                {
                    cout << "NO" << nl;
                }
                else
                {
                    cout << "YES" << nl;
                }
                break;
            }
        }
    }
    return 0;
}