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
    ll i, n, m, q, a;
    cin >> n >> m;
    a=n;
    vll v(n);
    unordered_map <ll, ll> mp;
    set <ll> s;
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    reverse(all(v));
    for(i=0;i<n;i++)
    {
        s.insert(v[i]);
        mp[a]=s.size();
        a--;
    }
    for(i=0;i<m;i++)
    {
        cin >> q;
        cout << mp[q] << nl;
    }
    return 0;
}