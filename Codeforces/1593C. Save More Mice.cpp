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
        ll i, h, n, c;
        cin >> h >> n;
        c = (h*2)-1;
        vll v(n), m(n), s(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        reverse(all(v));
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                m[i] = h-v[i];
                s[i] = (m[i]*2)-1;
            }
            else
            {
                m[i] = (h-v[i])+m[i-1];
                s[i] = (m[i]*2)-1;
            }
        }
        auto it = lb(all(s), c);
        cout << it-s.begin() << nl;
    }
    return 0;
}