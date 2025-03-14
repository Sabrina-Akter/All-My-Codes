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
        ll x, y, i, j, sum=0, n;
        cin >> x >> y;
        vll v1(x), v2(y), v3;
        for(i=0;i<x;i++)
        {
            cin >> v1[i];
        }
        sort(all(v1));
        for(i=0;i<y;i++)
        {
            cin >> v2[i];
        }
        sort(all(v2));
        v3.pb(sum);
        n = v2.size();
        for(i=0;i<v2.size();i++)
        {
            if(i==v1.size())
            {
                break;
            }
            n--;
            sum = sum-(v1[i]) + (v2[n]);
            v3.pb(sum);
        }
        sort(all(v3));
        cout << v3[v3.size()-1] << nl;
    }
    return 0;
}