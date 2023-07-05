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
        ll n, i, ind_1, ind_2, ind_n, x, y;
        cin >> n;
        vll v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            if(v[i]==1)
            {
                ind_1 = i+1;
            }
            else if(v[i]==2)
            {
                ind_2 = i+1;
            }
            else if(v[i]==n)
            {
                ind_n = i+1;
            }
        }
        if((ind_1<ind_n && ind_n<ind_2) || (ind_2<ind_n && ind_n<ind_1))
        {
            x = ind_n, y = ind_n;
        }
        else if(ind_1<ind_2 && ind_2<ind_n)
        {
            x = ind_2, y = ind_n;
        }
        else if(ind_2<ind_1 && ind_1<ind_n)
        {
            x = ind_1, y = ind_n;
        }
        else if(ind_n<ind_1 && ind_1<ind_2)
        {
            x = ind_1, y = ind_n;
        }
        else if(ind_n<ind_2 && ind_2<ind_1)
        {
            x = ind_2, y = ind_n;
        }
        cout << x << " " << y << nl; 
    }
    return 0;
}