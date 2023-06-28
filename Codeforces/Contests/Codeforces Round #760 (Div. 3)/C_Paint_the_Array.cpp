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
        ll n, i, gcd1, gcd2, f=0;
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            if(i%2==0)
            {
               if(i==0) 
               {
                   gcd1 = v[0];
               }
               else
               {
                   gcd1 = __gcd(gcd1, v[i]);
               }
            }
            else
            {
                if(i==1) 
               {
                   gcd2 = v[1];
               }
               else
               {
                   gcd2 = __gcd(gcd2, v[i]);
               }
            }
        }

        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(v[i]%gcd1!=0)
                {
                    f=1;
                    break;
                }
            }
            else
            {
                if(v[i]%gcd1==0)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
        {
            cout << gcd1 << nl;
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    if (v[i] % gcd2 == 0)
                    {
                        f = 0;
                        break;
                    }
                }
                else
                {
                    if (v[i] % gcd2 != 0)
                    {
                        f = 0;
                        break;
                    }
                }
            }
            if(f==1)
            {
                cout << gcd2 << nl;
            }
            else
            {
                cout << 0 << nl;
            }
        }
    }
    return 0;
}