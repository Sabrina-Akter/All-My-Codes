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
        ll n, i, j, cnt=0;
        cin >> n;
        vll a(n), b(n), neg, pos;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(i=0;i<n;i++)
        {
            cin >> b[i];
            ll x = b[i] - a[i];
            if(b[i]-a[i]<0)
            {
                neg.pb(x);
            }
            else
            {
                pos.pb(x);
            }
        }
        if(neg.size()==0)
        {
            cout << pos.size()/2 << nl;
        }
        else if(pos.size()==0)
        {
            cout << 0 << nl;
        }
        else
        {
            sort(all(neg));
            sort(all(pos));
            reverse(all(pos));
            i=0, j=0;
            while(1)
            {
                if(pos[i]+neg[j]>=0)
                {
                    cnt++;
                    i++;
                    j++;
                }
                else
                {
                    j++;
                }
                if(i==pos.size() || j==neg.size())
                {
                    break;
                }
            }
            ll ans = cnt+((pos.size()-i)/2);
            cout << ans << nl;
        }
    }
    return 0;
}