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

bool ans = false;

void f(vector<ll>&v, ll sum, ll ind, ll n)
{
    if(ind==n-1)
    {
        if(sum==0 || sum%360==0)
        {
            ans = true;
        }
    }
    else
    {
        f(v, sum-v[ind+1], ind+1, n);
        f(v, sum+v[ind+1], ind+1, n);
    }
}

int main()
{
    fastt;
    ll n, i;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    f(v, 0, -1, n);
    if(ans==true)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
	return 0;
}