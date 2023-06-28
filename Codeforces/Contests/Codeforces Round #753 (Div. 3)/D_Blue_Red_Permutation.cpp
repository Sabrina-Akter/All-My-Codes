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
        ll n, i, flag=0;
        cin >> n;
        vll v(n), b, r;
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        string s;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='B')
            {
                if(v[i]<=0)
                {
                    flag=1;
                }
                else
                {
                    b.pb(v[i]);
                }
            }
            else if(s[i]=='R')
            {
                if(v[i]>n)
                {
                    flag=1;
                }
                else
                {
                    r.pb(v[i]);
                }
            }
        }
        if(flag==1)
        {
            cout << "NO" << nl;
        }
        else
        {
            sort(all(b));
            sort(all(r));
            ll x=0, y=0;
            for(i=1;i<=n;i++)
            {
                if(x<b.size() && b[x]>=i) 
                {
                    x++;
                }
                else if(y<r.size() && r[y]<=i) 
                {
                    y++;
                }
                else
                {
                    flag=1;
                    break;
                }

            }
            if(flag==1)
            {
                cout << "NO" << nl;
            }
            else
            {
                cout << "YES" << nl;
            }
        }
    }
    return 0;
}