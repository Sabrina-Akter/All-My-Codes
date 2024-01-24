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
        ll n, x;
        cin >> n;
        priority_queue <pair<ll, ll>> Q;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            Q.push({x, i + 1});
        }
        int cnt = 0;
        vector <pair<ll, ll>> ans;
        while(1)
        {
            pair <ll, ll> mx1 = Q.top();
            Q.pop();
            pair <ll, ll> mx2 = Q.top();
            Q.pop();
            if(mx1.first == 0 || mx2.first == 0) break;
            cnt++;
            ans.pb({mx1.second, mx2.second});
            mx1.first--;
            mx2.first--;
            Q.push(mx1);
            Q.push(mx2);
        }
        cout << cnt << nl;
        for(auto &it : ans)
        {
            cout << it.first << " " << it.second << nl;
        }
    }
    return 0;
}