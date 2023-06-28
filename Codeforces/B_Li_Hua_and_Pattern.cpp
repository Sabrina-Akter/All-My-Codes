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
        ll n, k, i, j, cnt=0;
        cin >> n >> k;
        ll ar[n+1][n+1];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin >> ar[i][j];
            }
        }
        ll loop = n/2;
        if(n%2==0)
        {
            loop--;
        }
        ll x = n-1, y;
        for(i=0;i<=loop;i++)
        {
            y = n-1;
            ll X=x, Y=y;
            for(j=0;j<n;j++)
            {
                if(ar[i][j]!=ar[X][Y])
                {
                    if(ar[i][j]==0)
                    {
                        ar[i][j] = 1;
                    }
                    else
                    {
                        ar[i][j] = 0;
                    }
                    cnt++;
                }
                Y--;
            }
            x--;
        }
        if(cnt==k)
        {
            cout << "YES" << nl;
        }
        else if(cnt<k)
        {
            if(n%2!=0)
            {
                cout << "YES" << nl;
            }
            else
            {
                ll rem = k-cnt;
                if(rem%2==0)
                {
                    cout << "YES" << nl;
                }
                else
                {
                    cout << "NO" << nl;
                }
            }
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}