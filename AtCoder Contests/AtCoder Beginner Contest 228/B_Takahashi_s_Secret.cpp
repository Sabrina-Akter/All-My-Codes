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
    ll n, x, i, cnt=0;
    cin >> n >> x;
    vll v(n+1);
    unordered_map <ll, ll> m;
    for(i=1;i<=n;i++)
    {
        cin >> v[i];
    }
    m[x]=1;
    while(1)
    {
        if(m[v[x]]==1)
        {
            break;
        }
        else
        {
            m[v[x]]=1;
            x = v[x];
            cnt++;
        }
    }
    if(x<=n)
    {
        cnt++;
    }
    cout << cnt << nl;
    return 0;
}