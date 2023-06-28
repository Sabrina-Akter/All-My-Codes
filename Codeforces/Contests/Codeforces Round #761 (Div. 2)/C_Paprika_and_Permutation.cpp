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
        ll n, i, a=0, f=0, c=0;
        cin >> n;
        vll v(n), x;
        unordered_map <ll, ll> m;
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            if((v[i]>=1 && v[i]<=n) && (m[v[i]]==0))
            {
                m[v[i]]=1;
            }
            else
            {
                x.pb(v[i]);
            }
        }
        sort(all(x));
        for(i=1;i<=n;i++)
        {
            if(m[i]==1)
            {
                continue;
            }
            else
            {
                if((x[a]%(x[a]-i)==i))
                {
                    c++;
                }
                else
                {
                    f=1;
                    cout << -1 << nl;
                    break;
                }
                a++;
            }
        }
        if(f==0)
        {
            cout << c << nl;
        }
    }
    return 0;
}