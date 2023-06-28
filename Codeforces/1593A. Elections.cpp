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
        ll a, b, c, mx;
        unordered_map <ll, ll> m;
        cin >> a >> b >> c;
        m[a]++;
        m[b]++;
        m[c]++;
        mx = max(max(a,b), max(b,c));
        if(mx==a)
        {
            if(m[mx]==1)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }
        else
        {
            cout << (mx-a)+1;
        }
        cout << " ";
        if(mx==b)
        {
            if(m[mx]==1)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }
        else
        {
            cout << (mx-b)+1;
        }
        cout << " ";
        if(mx==c)
        {
            if(m[mx]==1)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }
        else
        {
            cout << (mx-c)+1;
        }
        cout << nl;
    }
    return 0;
}