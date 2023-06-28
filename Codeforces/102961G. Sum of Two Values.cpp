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
    ll n, t, i, flag=0, a, b;
    cin >> n >> t;
    vll v(n);
    multimap <ll, ll> m;
    for(i=0;i<n;i++)
    {
        cin >> v[i];
        m.insert({v[i],(i+1)});
    }
    for(i=0;i<n;i++)
    {
        auto it = m.ub((t-v[i]));
        auto it2 = m.lb(v[i]);
        it--;
        a = (*it).first, b = (*it).second;
        if(((t-((*it2).first))==a) && (((*it2).second)!=b))
        {
            cout << ((*it2).second) << " " << (*it).second << nl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout << -1 << nl;
    }
    return 0;
}


