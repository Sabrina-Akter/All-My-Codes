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
        ll n, i, ind_1, ind_2, ind_3, ind_mx;
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            if(v[i]==1)
            {
                ind_1 = i+1;
            }
            if(v[i]==2)
            {
                ind_2 = i+1;
            }
            if(v[i]==3)
            {
                ind_3 = i+1;
            }
            if(v[i]==n)
            {
                ind_mx = i+1;
            }
        }
        if(ind_1==n-1 && ind_mx==n)
        {
            cout << n-1 << " " << n << nl;
        }
        else if(ind_1==2 && ind_mx==1)
        {
            cout << 1 << " " << 2 << nl;
        }
        else if(ind_mx==2)
        {
            cout << 1 << " " << ind_1 << nl;
        }
        else if(ind_mx==n-1)
        {
            cout << n << " " << ind_1 << nl;
        }
        else if(ind_1==1)
        {
            cout << 2 << " " << ind_mx << nl;
        }
        else if(ind_1==n)
        {
            cout << n-1 << " " << ind_mx << nl;
        }
        else
        {
            if(ind_2==1)
            {
                cout << 2 << " " << ind_mx << nl;
            }
            else if(ind_2==n)
            {
                cout << n-1 << " " << ind_mx << nl;
            }
            else
            {
                int dir_3 = ind_1-ind_3;
                //Left
                if(dir_3>0)
                {
                    cout << n << " " << ind_2 << nl;
                }
                //Right
                else
                {
                    cout << 1 << " " << ind_2 << nl;
                }
            }
        }
    }
    return 0;
}