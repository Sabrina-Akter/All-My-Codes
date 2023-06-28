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
        ll n, i, sum=0, f=0, l;
        cin >> n;
        vll v;
        for(i=1;i<=1000;i++)
        {
            if(sum==n)
            {
                f=1;
                l = v.size();
                break;
            }
            else if(sum>n)
            {
                l = v.size()-1;
                break;
            }
            if(i%2!=0)
            {
                sum+=2;
                v.pb(2);
            }
            else if(i%2==0)
            {
                sum+=1;
                v.pb(1);
            }
        }
        if(f==0)
        {
            cout << 1;
        }
        for(i=0;i<l;i++)
        {
            cout << v[i];
        }
        cout << nl;
    }
    return 0;
}