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
#define sz(x) (long long)(x).size()

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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll i, one=0, zero=0, flag=0, first, last, f=0, mx, ans;
        for(i=0;i<sz(s);i++)
        {
            if((i==0 || i==n-1) && (s[i]=='1'))
            {
                cout << (n*2) << nl;
                flag=1;
                break;
            }
            if(s[i]=='1')
            {
                one++;
                last = i+1;
            }
            else if(s[i]=='0')
            {
                zero++;
            }
            if(f==0 && s[i]=='1')
            {
                first = i;
                f=1;
            }
        }
        if(flag==0)
        {
            mx = max(((n*2)-(first*2)), (last*2));
            if(zero==n)
            {
                cout << n << nl;
            }
            else if(one==n)
            {
                cout << (2*n) << nl;
            }
            else
            {
                ans = (2*one)+zero;
                mx = max(mx, ans);
                cout << mx << nl;
            }
        }
    }
    return 0;
}