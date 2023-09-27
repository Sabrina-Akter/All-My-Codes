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
    ll t, i;
    cin >> t;
    while(t--)
    {
        vector<ll> a(3), b(3);

        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
            
        for(i=0;i<3;i++)
        {
            cin>>b[i];
        }
            
        ll total=0;
        ll mini=min(a[2],b[1]);
        total+=2LL*mini;
        a[2]-=mini;
        b[1]-=mini;
        ll maxi=max(0LL,b[2]-a[2]-a[0]);
        total-=2LL*maxi;
        cout<<total<<nl;        
    }
    return 0;
}