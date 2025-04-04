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
        string s;
        cin >> s;
        priority_queue <pair<char, int>> pq;
        unordered_map <char, ll> mp;
        ll sum = 0;
        for(ll i = 0; i < s.size(); i++)
        {
            pq.push({s[i], i});
            sum += (s[i] - 'a' + 1);
        }
        ll n;
        cin >> n;
        if(sum <= n) cout << s << nl;
        else
        {
            while(1)
            {
                if(sum <= n) break;
                if(!pq.empty())
                {
                    mp[pq.top().second] = 1;
                    sum -= (pq.top().first - 'a' + 1);
                    pq.pop();
                }
            }
            for(int i = 0; i < s.size(); i++) if(mp[i] == 0) cout << s[i];
            cout << nl;
        }
    }
    return 0;
}