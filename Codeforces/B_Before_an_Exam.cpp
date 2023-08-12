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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // L, R, D, U, TR, BR, TL, BL
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  //

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll days, time, i, sum_min=0, sum_max=0;
    cin >> days >> time;
    vector <pair<int, int> > v(days);
    for(i=0;i<days;i++)
    {
        cin >> v[i].first >> v[i].second;
        sum_min+=v[i].first;
        sum_max+=v[i].second;
    }
    if(time>=sum_min && time<=sum_max)
    {
        cout << "YES" << nl;
        ll needed = time - sum_min, f=0;
        for(i=0;i<days;i++)
        {
            if(f==0)
            {
                if(needed>=(v[i].second-v[i].first))
                {
                    cout << v[i].second << " ";
                    needed-=(v[i].second-v[i].first);
                }
                else
                {
                    cout << v[i].first+needed << " ";
                    needed = 0;
                }
            }
            else if(f==1)
            {
                cout << v[i].first << " ";
            }
            if(needed==0)
            {
                f=1;
            }
        }
        cout << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
    return 0;
}