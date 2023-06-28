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
        string a, b, s1="", s2="", s3="", s4="", s5="", s6="";
        ll x, y, i, lcm1, gcd1;
        cin >> a >> b;
        if(a.size()==b.size())
        {
            if(a==b)
            {
                cout << a << nl;
            }
            else
            {
                cout << -1 << nl;
            }
        }
        else
        {
            x = max(a.size(), b.size());
            y = min(a.size(), b.size());
            gcd1 = __gcd(x,y);
            lcm1 = (x/gcd1)*y;
            for(i=0;i<gcd1;i++)
            {
                s1.pb(a[i]);
            }
            while(1)
            {
                if(s3.size()==lcm1)
                {
                    break;
                }
                s3=s3+s1;
            }
            for(i=0;i<gcd1;i++)
            {
                s2.pb(b[i]);
            }
            while(1)
            {
                if(s4.size()==lcm1)
                {
                    break;
                }
                s4=s4+s2;
            }
            while(1)
            {
                if(s5.size()==lcm1)
                {
                    break;
                }
                s5=s5+a;
            }
            while(1)
            {
                if(s6.size()==lcm1)
                {
                    break;
                }
                s6=s6+b;
            }
            if((s3==s4) && (s5==s6))
            {
                cout << s3 << nl;
            }
            else
            {
                cout << -1 << nl;
            }
        }
    }
    return 0;
}