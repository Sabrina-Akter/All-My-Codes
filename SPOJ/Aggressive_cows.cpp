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

ll n, c, i;
vll v(100006);

bool func(ll num)
{
    ll cow=c, last=-1;
    for(i=0;i<n;i++)
    {
        if(v[i]-last>=num || last==-1)
        {
            cow--;
            last = v[i];
        }
        if(cow==0)
        {
            break;
        }
    }
    return cow==0;
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        cin >> n >> c;
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.begin()+n);
        ll high = 1e9, low = 0, mid;
        while(high-low>1)
        {
            mid = (high+low)/2;
            if(func(mid))
            {
                low = mid;
            }
            else
            {
                high = mid-1;
            }
        }
        if(func(high))
        {
            cout << high << nl;
        }
        else
        {
            cout << low << nl;
        }
    }
    return 0;
}