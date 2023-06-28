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
        ll i, n, a, b, h, mx=LONG_LONG_MIN, mn=LONG_LONG_MAX, x=0, y=0;

        cin >> n >> a >> b;
        h = n/2;
        vll v1, v2;
        v1.pb(a);
        mn = min(mn, a);
        v2.pb(b);
        mx = max(mx, b);
        for(i=n;i>=1;i--)
        {
            if(i==b || i==a)
            {
                continue;
            }
            else
            {
                v1.pb(i);
                mn = min(mn, i);
                x++;
                if(x==h-1)
                {
                    break;
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            if(i==a || i==b)
            {
                continue;
            }
            else
            {
                v2.pb(i);
                mx = max(mx, i);
                y++;
                if(y==h-1)
                {
                    break;
                }
            }
        }
        if(mn==a && mx==b)
        {
            for(i=0;i<v1.size();i++)
            {
                cout << v1[i] << " ";
            }
            for(i=0;i<v2.size();i++)
            {
                cout << v2[i] << " ";
            }
        }
        else
        {
            cout << "-1";
        }
        cout << nl;
    }
    return 0;
}