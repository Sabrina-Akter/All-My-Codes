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
        string s;
        ll a, b, e=0, i, n;
        cin >> s;
        a = s[0]-48, b = s[s.size()-1]-48;
        for(i=0;i<s.size();i++)
        {
            n = s[i]-48;
            if(n%2==0)
            {
                e++;
            }
        }
        if(e==0)
        {
            cout << -1 << nl;
        }
        else
        {
            if(b%2==0)
            {
                cout << 0 << nl;
            }
            else if(a%2==0)
            {
                cout << 1 << nl;
            }
            else
            {
                cout << 2 << nl;
            }
        }
    }
    return 0;
}