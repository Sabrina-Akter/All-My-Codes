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

double func(double x, double y, double z, double l, double w, double h)
{
    double cnt = 0, f=0, d=2.00;
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
        if(f==0)
        {
            cnt = -1;
        }
    return cnt;
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        vector <double> v1(3);
        vector <double> v2(3);
        vector <double> result;
        ll i;
        for(i=0;i<3;i++)
        {
            cin >> v1[i];
        }
        for(i=0;i<3;i++)
        {
            cin >> v2[i];
        }
        sort(all(v1));
        do
        {
            double ans = func(v1[0], v1[1], v1[2], v2[0], v2[1], v2[2]);
            if(ans!=-1)
            {
                result.pb(ans);
            }
        } while (next_permutation(all(v1)));
        if(result.size()==0)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << *min_element(all(result)) << nl;
        }
    }
    return 0;
}
