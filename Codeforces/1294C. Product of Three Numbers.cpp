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
        ll n, m, i, j, a, b, c, flag=0;
        cin >> n;
        for(i=2;(i*i)<=n;i++)
        {
            if(n%i==0)
            {
                a = i;
                m = n/i;
                for(j=i+1;(j*j)<=m;j++)
                {
                    if(m%j==0)
                    {
                        b = j;
                        c = m/j;
                        if((a!=b) && (b!=c) && (a!=c))
                        {
                            cout << "YES" << nl;
                            cout << a << " " << b << " " << c << nl;
                            flag=1;
                            break;
                        }
                    }
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==0)
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}