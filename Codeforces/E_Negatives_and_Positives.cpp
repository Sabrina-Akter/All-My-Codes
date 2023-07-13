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
        ll n, i, neg=0, zero=0, x, sum=0, smallest=LONG_LONG_MAX;
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            x = v[i];
            if(v[i]==0)
            {
                zero++;
            }
            else if(v[i]<0)
            {
                neg++;
                x=-v[i];
            }
            sum+=x;
            smallest = min(x, smallest);
        }
        if(neg%2==0 || zero>0)
        {
            cout << sum << nl;
        }
        else
        {
            cout << sum-smallest-smallest << nl;
        }
    }
    
    return 0;
}