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
        ll n, i, cnt=0;
        cin >> n;
        vll v(n), x(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            while(v[i]%2==0)
            {
                cnt++;
                v[i] = v[i]/2;
            }
            ll cnt2=0, test=i+1;
            while(test%2==0)
            {
                cnt2++;
                test = test/2;
            }
            x[i] = cnt2;
        }
        if(cnt>=n)
        {
            cout << 0 << nl;
        }
        else
        {
            sort(all(x));
            reverse(all(x));
            ll f=0, ans;
            for(i=0;i<n;i++)
            {
                cnt+=x[i];
                if(cnt>=n)
                {
                    f=1;
                    ans = i+1;
                    break;
                }
            }
            if(f==0)
            {
                cout << -1 << nl;
            }
            else
            {
                cout << ans << nl;
            }
        }
    }
    return 0;
}