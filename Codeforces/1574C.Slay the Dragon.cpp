#include <bits/stdc++.h>
using namespace std;

#define fastt                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)

const int MOD = 1000000007;
const char nl = '\n';

int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // King's Moves
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; // King's Moves

int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move

int main()
{
    fastt;
    ll n, sum=0, q, i;
    cin >> n;
    vll v(n);
    set <ll> SET;
    for(i=0;i<n;i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    sort(all(v));
    cin >> q;
    for(i=0;i<q;i++)
    {
        ll x, y, z, num, a, b, c, mn=LONG_LONG_MAX;
        set <ll> SET;
        cin >> x >> y;
        auto it = ub(all(v), x);
        if((*it)!=v[0])
        {
            it--;
        }
        while(1)
        {
            SET.insert(*it);
            a = x-(*it);
            if(a<0)
            {
                a = 0;
            }
            b = y - (sum-(*it));
            if(b<0)
            {
                b = 0;
            }
            c = a+b;
            mn = min(mn, c);
            if((*it)==(v[n-1]))
            {
                break;
            }
            if(SET.size()==3)
            {
                break;
            }
            it++;
        }
        cout << mn << nl;
    }
    return 0;
}