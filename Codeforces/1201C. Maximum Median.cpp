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
#define sz(x) (long long)(x).size()

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll n,i ;
    cin>>n;
    vector<ll>v;
    ll k;
    cin>>k;
    for(i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    sort(all(v));
    ll ans=0;
    ll l=v[n/2], r=v[n/2]+k;
    //cout << "Left = " << l << " and Right = " << r << nl;
    while(l<=r)
    {
        ll m=(l+r)/2;
        //cout << "mid = " << m << nl;
        ll c=0;
        for(ll i=n/2;i<n;i++)
        {
            if(v[i]<m)
            {
                c+=m-v[i];
                //cout << "c = " << c << nl;
            }
        }
        if(c<=k)
        {
            l=m+1;
            //cout << "If, Left = " << l << " and " << "Right = " << r << nl;
            ans=m;
            //cout << "Ans: " << ans << nl;
        }
        else
        {
            r=m-1;
            //cout << "Else, Right = " << r << nl;
        }
    }
    cout<<ans<<endl;
    return 0;
}
