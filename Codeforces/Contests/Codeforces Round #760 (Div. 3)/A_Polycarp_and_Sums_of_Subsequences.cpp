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
        vll v(7);
        ll i, j, k, mx=-1;
        for(i=0;i<7;i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        sort(all(v));
        for(i=0;i<6;i++)
        {
            for(j=i+1;j<6;j++)
            {
                for(k=j+1;k<6;k++)
                {
                    if(v[i]+v[j]+v[k]==mx)
                    {
                        cout << v[i] << " " << v[j] << " " << v[k] << nl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}