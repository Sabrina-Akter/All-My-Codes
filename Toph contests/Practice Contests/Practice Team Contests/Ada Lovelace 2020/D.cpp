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
    map <pair<ll, ll>, ll> p1, p2;
    ll n, i, Q, q, sum1=0, sum2=0, start, end;
    cin >> n;
    vll v1(n), v2(n), pref(n), suf(n);
    //Prefix
    for(i=0;i<n;i++)
    {
        cin >> v1[i] >> v2[i];
        if(i==0)
        {
            sum1+=v2[i];
            pref[i] = sum1;
            start = 1;
            end = 1;
        }
        else
        {
            if(v1[i-1]>=v1[i])
            {
                sum1+=v2[i];
                end = i + 1;
            }
            else
            {
                p1[{start, end}]=sum1;
                sum1 = v2[i];
                start = i+1;
                end = i+1;
            }
            pref[i] = sum1;
        }
        cout << pref[i] << " ";
    }
    p1[{start, end}]=sum1;
    cout << nl;
    //Suffix
    for(i=n-1;i>=0;i--)
    {
        if(i==n-1)
        {
            sum2+=v2[i];
            suf[i] = sum2;
            start = i+1;
            end = i+1;
        }
        else
        {
            if(v1[i]<=v1[i+1])
            {
                sum2+=v2[i];
                end = i+1;
            }
            else
            {
                p2[{start, end}]=sum2;
                sum2 = v2[i];
                start = i+1;
                end = i+1;
            }
            suf[i] = sum2;
        }
        cout << suf[i] << " ";
    }
    p2[{start, end}]=sum2;
    cout << nl;
    for(i=0;i<p2.size();i++)
    {
        cout << p2[i].first << " " << p2[i].second << nl;
    }
    cin >> Q;
    for(i=0;i<Q;i++)
    {
        cin >> q;
        
    }

    return 0;
}