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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, one1=0, one2=0, d, cnt=0, ans=0;
        cin >> n;
        vll v1(n), v2(n);
        for(i=0;i<n;i++)
        {
            cin >> v1[i];
            if(v1[i]==1)
            {
                one1++;
            }
        }
        for(i=0;i<n;i++)
        {
            cin >> v2[i];
            if(v2[i]==1)
            {
                one2++;
            }
        }
        d = abs(one1-one2);
        ans = d;
        for(i=0;i<n;i++)
        {
            if(v1[i]!=v2[i])
            {
                cnt++;
            }
        }
        if(cnt!=d)
        {
            ans++;
        }
        cout << ans << nl;
    }
    return 0;
}
