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
    ll n;
    cin >> n;
    unordered_map <string, ll> total;
    string name;
    ll score, mx = LONG_LONG_MIN;
    vector <pair<string, ll> > players;
    for(ll i = 0; i < n; i++)
    {
        cin >> name >> score;
        players.pb({name, score});
        total[name] += score;
    }
    for(auto &it : total)
    {
        mx = max(mx, it.second);
    }
    unordered_map <string, ll> temp;
    for(ll i = 0; i < n; i++)
    {
        temp[players[i].first] += players[i].second;
        if(temp[players[i].first] >= mx && total[players[i].first] == mx)
        {
            cout << players[i].first << nl;
            break;
        }
    }
    return 0;
}
