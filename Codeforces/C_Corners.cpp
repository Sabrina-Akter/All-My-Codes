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
        ll row, col, i, j, max_zero=-1, max_one=0, total_one=0, zero, one, O, that_one;
        cin >> row >> col;
        ll ar[row+1][col+1];
        char c;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
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
                if(ar[i][j]==1)
                {
                    total_one++;
                }
            }
        }
        for(i=0;i<row-1;i++)
        {
            for(j=0;j<col-1;j++)
            {
                ll top_left = ar[i][j];
                ll top_right = ar[i][j+1];
                ll bottom_left = ar[i+1][j];
                ll bottom_right = ar[i+1][j+1];
                one = top_left + top_right + bottom_left + bottom_right;
                zero = 4-one;
                if(zero>max_zero)
                {
                    max_zero = zero;
                    that_one = one;
                    if(zero==0 || zero==1 || zero==2)
                    {
                        O = 2;
                    }
                    else if(zero==3)
                    {
                        O = 1;
                    }
                    else if(zero==4)
                    {
                        O = 0;
                    }
                }
            }
        }
        ll ans = total_one - that_one;
        ans+=O;
        cout << ans << nl;
    }
    return 0;
}