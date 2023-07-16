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
        ll n, i, sum=0, x, y;
        cin >> n;
        string s;
        cin >> s;
        vector <pair<ll, ll> > need_and_has;
        vector <ll> v(n);
        for(i=0;i<n;i++)
        {
            x = n-i-1, y = i;
            if(s[i]=='R')
            {
                sum+=x;
                if(y>x)
                {
                    need_and_has.pb({y, x});
                }
            }
            else
            {
                sum+=y;
                if(x>y)
                {
                    need_and_has.pb({x, y});
                }
            }
        }
        sort(all(need_and_has));
        reverse(all(need_and_has));
        if(need_and_has.size()!=0)
        {
            for(i=0;i<need_and_has.size();i++)
            {
                v[i] = sum+need_and_has[i].first-need_and_has[i].second;
                sum = v[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(need_and_has.size()==0)
            {
                cout << sum << " ";
            }
            else
            {
                if(v[i]==0)
                {
                    v[i] = v[i-1];
                }
                cout << v[i] << " ";
            }
        }
        cout << nl;
    }
    return 0;
}