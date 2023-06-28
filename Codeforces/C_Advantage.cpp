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
        ll n, i, a, b;
        cin >> n;
        vll v1(n), v2(n);
        for(i=0;i<n;i++)
        {
            cin >> v1[i];
            v2[i] = v1[i];
        }
        sort(all(v2));
        a = v2[n-1], b = v2[n-2];
        for(i=0;i<n;i++)
        {
            if(v1[i]==a)
            {
                cout << v1[i]-b << " ";
            }
            else
            {
                cout << v1[i]-a << " ";
            }
        }
        cout << endl;
    }
    return 0;
}