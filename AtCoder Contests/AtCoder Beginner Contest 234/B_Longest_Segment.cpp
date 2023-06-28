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
    double i, j, n, x, y, mx=LONG_LONG_MIN;
    cin >> n;
    vector <pair<ll, ll> > v(n);
    for(i=0;i<n;i++)
    {
        cin >> x >> y;
        v[i].first = x;
        v[i].second = y;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            double x1 = v[i].first;
            double y1 = v[i].second;
            double x2 = v[j].first;
            double y2 = v[j].second;
            double dist = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
            if(dist>mx)
            {
                mx = dist;
            }
        }
    }
    cout << fixed << setprecision(10) << mx << nl;
    return 0;
}