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

ll n, k, i;
vll v(105);
bool func(ll num)
{
    ll sum=0;
    for(i=0;i<n;i++)
    {
        if((i==n-1) || (v[i+1]-v[i]>num))
        {
            sum+=num;
        }
        else if(v[i+1]-v[i]<=num)
        {
            sum+=(v[i+1]-v[i]);
        }
    }
    return sum>=k;
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        fill(v.begin(), v.end(), 0);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        if(n>=k)
        {
            cout << 1 << nl;
        }
        else
        {
            ll high = (k-n)*2, low = 0, mid;
            while(high-low>1)
            {
                mid = (high+low)/2;
                if(func(mid))
                {
                    high = mid;
                }
                else
                {
                    low = mid;
                }
            }
            cout << high << nl;
        }
    }
    return 0;
}