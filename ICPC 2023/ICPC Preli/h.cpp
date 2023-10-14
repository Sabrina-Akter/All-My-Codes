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

bool f(vector<ll>&v,vector<ll>&vis, ll num, ll sum, ll i, ll total) 
{
    if (total == 1)
    {
        return true;
    }            
    if (sum == num) 
    {
        return f(v, vis, num, 0, 0, total-1);
    }  
    ll j;  
    for (j = i; j < v.size(); j++) 
    {
        if (vis[j] || sum + v[j] > num) 
        {
            continue;
        }       
        vis[j] = true;
        if (f(v, vis, num, sum + v[j], j+1, total))
        {
            return true;
        } 
        vis[j] = false;
    }     
    return false;
}


int main()
{
    fastt;
    ll t, cs=0;
    cin >> t;
    while(t--)
    {
        cs++;
        cout << "Case " << cs << ":" << nl;
        ll n, i, x, sum=0;
        cin >> n;
        vll v;
        for(i=0;i<n;i++)
        {
            cin >> x;
            v.pb(x);
            sum+=x;
            if(sum==0)
            {
                cout << 1 << nl;
            }
            else if(i>=2 && sum%3==0)
            {
                ll num = sum/3;
                vector<ll>vis(v.size(), false);
                cout << f(v, vis, num, 0, 0, 3) << nl;
            }
            else
            {
                cout << 0 << nl;
            }
        }

    }
    return 0;
}
