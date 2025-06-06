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
    ll n, k, i, x;
    cin >> n >> k;
    priority_queue <ll, vector<ll>, greater<ll>> p;
    for(i=0;i<n;i++)
    {
        cin >> x;
        if(i<(k-1))
        {
            p.push(x);
        }
        else if(i==(k-1))
        {
            p.push(x);
            cout << p.top() << nl;
        }
        else
        {
            if(x>p.top())
            {
                p.pop();
                p.push(x);
            }
            cout << p.top() << nl;
        }
    }
    return 0;
}