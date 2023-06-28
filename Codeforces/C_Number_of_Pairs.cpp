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
#define pll pair<ll,ll>
#define plll pair<pll,ll>

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
        ll n, l, r, i, num, x, y, sum=0, a, b;
        cin >> n >> l >> r;
        vll v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        for(i=0;i<n;i++)
        {
            num = v[i];
            x = l - num - 1;
            y = r - num;
            vector<ll>::iterator upper1, upper2;
            upper1 = ub(v.begin(), v.end(), x);
            upper2 = ub(v.begin(), v.end(), y);
            a = (upper1-v.begin());
            b = (upper2-v.begin());
            if(a==n && b==n)
            {
                continue;
            }
            b--;
            if(a==i)
            {
                a++;
            }
            if(a<i)
            {
                a = i+1;
            }
            if(b<i || b==i)
            {
                continue;
            }
            sum+=(b-a)+1;
        }
        cout << sum << nl;
    }
    return 0;
}