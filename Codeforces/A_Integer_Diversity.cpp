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
        ll i, n, x, z=0, sum=0;
        cin >> n;
        set <ll> s;
        set <ll>::iterator itr;
        unordered_map <ll, ll> m;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(x==0)
            {
                z=1;
            }
            else
            {
                if(x<0)
                {
                    x = x*(-1);
                }
                s.insert(x);
                m[x]++;
            }
        }
        for(itr=s.begin();itr!=s.end();itr++)
        {
            if(m[*itr]==1)
            {
                sum++;
            }
            else
            {
                sum+=2;
            }
        }
        cout << sum+z << nl;
    }
    return 0;
}