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
    ll t, i, n, coin;
    cin >> t;
    vll v1(t), v2(t), v, c;
    for(i=0;i<t;i++)
    {
        cin >> v1[i] >> v2[i];       
        if(i!=0)
        {
            if(v1[i-1]==v1[i])
            {
                coin+=v2[i];
            }
            else
            {
                c.pb(coin);
                v.pb(v1[i-1]);
                coin = v2[i];
            }
        }
        else
        {
            coin = v2[i];
        }
    }
    v.pb(v1[t-1]);
    c.pb(coin);
    n = v.size();
    //Pref
    ll sum1=0, sum2=0;
    vll pref(n), suf(n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            sum1+=c[i];
            pref[i] = sum1;
        }
        else
        {
            if(v[i-1]>=v[i])
            {
                sum1+=c[i];
            }
            else
            {
                sum1 = c[i];
            }
            pref[i] = sum1;
        }
        cout << pref[i] << " ";
    }
    cout << nl;
    //Suf
    for(i=n-1;i>=0;i--)
    {
        if(i==n-1)
        {
            sum2+=c[i];
            suf[i] = sum2;
        }
        else
        {
            if(v[i]<=v[i+1])
            {
                sum2+=c[i];
            }
            else
            {
                sum2 = c[i];
            }
            suf[i] = sum2;
        }
        cout << suf[i] << " ";
    }
    cout << nl;
    return 0;
}