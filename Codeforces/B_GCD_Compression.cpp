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
        ll i, n, c=0, a, b;
        cin >> n;
        vll v(2*n), o, e;
        for(i=0;i<(2*n);i++)
        {
            cin >> v[i];
            if(v[i]%2==0)
            {
                e.pb(i+1);
            }
            else
            {
                o.pb(i+1);
            }
        }
        a = o.size(), b = e.size();
        if(a%2!=0)
        {
            a--;
        }
        if(b%2!=0)
        {
            b--;
        }
        for(i=0;i<a;i++)
        {
            if(c==((n-1)*2))
            {
                break;
            }
            cout << o[i] << " " << o[i+1] << nl;
            c+=2;
            i++;
        }
        for(i=0;i<b;i++)
        {
            if(c==((n-1)*2))
            {
                break;
            }
            cout << e[i] << " " << e[i+1] << nl;
            c+=2;
            i++;
        }
    }
    return 0;
}