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
        ll n, i, j, x, cnt=0;
        cin >> n;
        unordered_map <ll, ll> m;
        vll v;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(m[x]==0)
            {
                v.pb(x);
            }
            m[x]=1;
        }
        sort(all(v));
        for(i=0;i<v.size();i++)
        {
            if(cnt==(n/2))
            {
                break;
            }
            for(j=i+1;j<v.size();j++)
            {
                if(cnt==(n/2))
                {
                    break;
                }
                if(m[v[i]%v[j]]==0)
                {
                    cnt++;
                    cout << v[i] << " " << v[j] << nl;
                }
                if(m[v[j]%v[i]]==0)
                {
                    cnt++;
                    cout << v[j] << " " << v[i] << nl;
                }
            }
        }
    }
    return 0;
}