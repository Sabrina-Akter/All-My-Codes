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
        double i, x, y, z, l, w, h, cnt=0, f=0, d=2.00;
        vector <double> v1(3), v2(3);
        for(i=0;i<3;i++)
        {
            cin >> v1[i];
        }
        for(i=0;i<3;i++)
        {
            cin >> v2[i];
        }
        sort(all(v1));
        sort(all(v2));
        x = v1[2], y = v1[1], z = v1[0];
        l = v2[2], w = v2[1], h = v2[0];
        while(1)
        {
            if(l<=x && w<=y)
            {
                if(h<=z)
                {
                    f=1;
                }
                break;
            }
            else
            {
                if(l>x)
                {
                    l/=d;
                    h*=d;
                    cnt++;
                }
                else if(w>y)
                {
                    w/=d;
                    h*=d;
                    cnt++;
                }
            }
        }
        if(f==1)
        {
            cout << cnt << nl;
        }
        else
        {
            cout << -1 << nl;
        }
    }
    return 0;
}