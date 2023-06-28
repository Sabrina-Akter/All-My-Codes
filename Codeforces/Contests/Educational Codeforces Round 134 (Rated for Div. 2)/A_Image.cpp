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
    ll n;
    cin >> n;
    while(n--)
    {
        map <char, ll> m;
        map <ll, ll> m2;
        ll mx = LONG_LONG_MIN, ans;
        char a[4];
        ll i;
        for(i=0;i<4;i++)
        {
            cin >> a[i];
            m[a[i]]++;
            m2[m[a[i]]]++;
            mx = max(mx, m[a[i]]);
        }
        if(mx==2)
        {
            if(m2[2]==2)
            {
                ans = 1;
            }
            else
            {
                ans = 2;
            }
        }
        else if(mx==1)
        {
            ans = 3;
        }
        else if(mx==4)
        {
            ans = 0;
        }
        else if(mx==3)
        {
            ans = 1;
        }
        cout << ans << nl;
    }
    return 0;
}