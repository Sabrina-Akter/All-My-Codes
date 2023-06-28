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
    ll t, cs=0;
    cin >> t;
    while(t--)
    {
        ll Q;
        cs++;
        cout << "Case " << cs << ":" << nl;
        cin >> Q;
        vector <pair <ll, ll> > v;
        vll v2;
        while(Q--)
        {
            ll q;
            cin >> q;
            if(q==1)
            {
                ll n, m, a=0, b=1, pnt, pr;
                cin >> n;
                m = n;
                while(1)
                {
                    a+=(n%10);
                    n = n/10;
                    if(n==0)
                    {
                        break;
                    }
                }
                n = m;
                while(1)
                {
                    b*=((n%10)+1);
                    n = n/10;
                    if(n==0)
                    {
                        break;
                    }
                }
                cout << "a = " << a << nl;
                cout << "b = " << b << nl;
                pnt = a*b;
                v2.pb(pnt);
                if(v.size()==0)
                {

                }
                v.pb({n,0});
            }
            else if(q==2)
            {

            }
            else if(q==3)
            {

            }
        }
    }
    return 0;
}