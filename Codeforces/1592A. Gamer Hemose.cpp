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
        ll n, h, i, D, e, ans;
        double d, sum, a, b, c;
        cin >> n >> h;
        sum=h;
        vll v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        a = v[n-1];
        b = v[n-2];
        c = a+b;
        if(sum-a<=0)
        {
            ans=1;
        }
        else
        {
            d = h/c;
            D = h/c;
            if(d!=D)
            {
                D++;
            }
            e = (D*c)-h;
            ans = D*2;
            if(e>=b)
            {
                ans = ans-1;
            }
        }
        cout << ans << nl;
    }
    return 0;
}