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

    ll cnt=0,ans=0, n, i;
    cin >> n;
    ll  a[n];
    for(i=0;i<n;i++)cin>>a[i];
    if(n==1)ans=a[0];
    else
    {
        if(n==2)ans=__gcd(a[0], a[1]);
        else
        {
            ans=__gcd(a[0], a[1]);
            for(i=2;i<n;i++)
            {
                ans=__gcd(ans, a[i]);
            }
        }
    }
    vector<ll>v;

    for(i=1;i<=sqrt(ans);i++) if(ans%i==0)v.pb(ans/i), v.pb(i);
    set<ll>st;
    for(i=0;i<v.size();i++)st.insert(v[i]);

    cout<<st.size()<<endl;
    return 0;
}