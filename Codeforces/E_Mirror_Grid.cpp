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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, j, loop;
        cin >> n;
        loop = n/2;
        ll ar[n+1][n+1];
        char c;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin >> c;
                if(c=='1')
                {
                    ar[i][j] = 1;
                }
                else
                {
                    ar[i][j] = 0;
                }
            }
        }
        vector <pair<ll, ll> > v(4);
        v[0] = {0, 0};
        v[1] = {0, n-1};
        v[2] = {n-1, 0};
        v[3] = {n-1, n-1};
        ll top_left_x, top_left_y;
        ll top_right_x, top_right_y;
        ll bottom_left_x, bottom_left_y;
        ll bottom_right_x, bottom_right_y;
        ll inside_loop = n-1, sum=0;
        while(loop--)
        {
            top_left_x = v[0].first, top_left_y = v[0].second;
            top_right_x = v[1].first, top_right_y = v[1].second;
            bottom_left_x = v[2].first, bottom_left_y = v[2].second;
            bottom_right_x = v[3].first, bottom_right_y = v[3].second;
            ll LOOP = inside_loop;
            while(LOOP--)
            {
                ll one=0, zero;
                one+=ar[top_left_x][top_left_y];
                one+=ar[top_right_x][top_right_y];
                one+=ar[bottom_left_x][bottom_left_y];
                one+=ar[bottom_right_x][bottom_right_y];
                zero = 4-one;
                sum+=min(one, zero);
                //top_left
                top_left_y++;
                //top_right
                top_right_x++;
                //bottom_left
                bottom_left_x--;
                //bottom_right
                bottom_right_y--;
            }
            //inside_loop
            inside_loop-=2;
            //top_left
            v[0].first++;
            v[0].second++;
            //top_right
            v[1].first++;
            v[1].second--;
            //bottom_left
            v[2].first--;
            v[2].second++;
            //bottom_right
            v[3].first--;
            v[3].second--;
        }
        cout << sum << nl;
    }
    return 0;
}