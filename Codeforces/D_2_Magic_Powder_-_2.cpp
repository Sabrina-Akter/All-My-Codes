#include <bits/stdc++.h>
using namespace std;
 
#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll unsigned long long int
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
 
ll i,n,k,a[100001],b[100001];

ll fnd(ll num)
{
    ll sum=0;
    for(i=0;i<n;i++)
    {
        if(a[i]*num>b[i])
        {
            sum+=(a[i]*num)-b[i];
        }
    }
    return sum<=k;
}

int main()
{
    while(cin>>n>>k)
    {
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        ll low,mid,high,ans=0;
        low=0;
        high=LONG_LONG_MAX;
        while(high-low>1)
        {
            mid=(low+high)/2;
            if(fnd(mid))
                {
                    low=mid;
                }
            else
                high=mid-1;
        }
        if(fnd(high))
        {
            cout << high << endl;
        }
        else
        {
            cout << low << endl;
        }
    }
    return 0;
}