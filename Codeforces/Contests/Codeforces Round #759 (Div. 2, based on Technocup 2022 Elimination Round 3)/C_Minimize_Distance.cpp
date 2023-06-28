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
        ll n, k, i, x, b, cnt=0, mx;
        cin >> n >> k;
        vll v1, v2;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(x>0)
            {
                v1.pb(x);
            }
            else if(x<0)
            {
                v2.pb(x*(-1));
            }
        }
        sort(all(v1));
        sort(all(v2));
        if(v1.size()==0 && v2.size()==0)
        {
            cout << 0 << nl;
        }
        else if(v1.size()==0)
        {
            b = k;
            mx = 0;
            for(i=v2.size()-1;i>=0;i--)
            {
                b--;
                mx = max(mx, v2[i]);
                if(b==0 || i==0)
                {
                    cnt+=(2*mx);
                    mx = 0;
                    b = k;
                }
            }
            cout << cnt-v2[v2.size()-1] << nl;
        }
        else if(v2.size()==0)
        {
            b = k;
            mx = 0;
            for(i=v1.size()-1;i>=0;i--)
            {
                b--;
                mx = max(mx, v1[i]);
                if(b==0 || i==0)
                {
                    cnt+=(2*mx);
                    mx = 0;
                    b = k;
                }
            }
            cout << cnt-v1[v1.size()-1] << nl;
        }
        else
        {
            b = k;
            mx = 0;
            for(i=v1.size()-1;i>=0;i--)
            {
                b--;
                mx = max(mx, v1[i]);
                if(b==0 || i==0)
                {
                    cnt+=(2*mx);
                    mx = 0;
                    b = k;
                }
            }
            b = k;
            mx = 0;
            for(i=v2.size()-1;i>=0;i--)
            {
                b--;
                mx = max(mx, v2[i]);
                if(b==0 || i==0)
                {
                    cnt+=(2*mx);
                    mx = 0;
                    b = k;
                }
            }
            cout << cnt-max(v1[v1.size()-1], v2[v2.size()-1]) << nl;
        }
    }
    return 0;
}