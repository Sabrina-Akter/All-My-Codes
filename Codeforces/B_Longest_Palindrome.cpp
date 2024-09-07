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
    ll n, l;
    cin >> n >> l;
    vector <pair<ll, string>> itself;
    unordered_map <string, ll> pal;
    string s, x;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        x = s;
        reverse(all(x));
        if(s == x) itself.push_back({s.size(), s});
        pal[s]++;
    }
    sort(itself.rbegin(), itself.rend());
    string ans1, ans2, ans3;
    for(auto &it : pal)
    {
        s = it.first;
        x = s;
        reverse(all(x));
        ll mini = min(pal[s], pal[x]);
        if(s == x) mini /= 2;
        for(int i = 0; i < mini; i++)
        {
            ans1 += s;
            ans2 += s;
        }
        pal[s] = 0;
        pal[x] = 0;
    }
    if(itself.size() > 0) ans3 = itself[0].second;
    ans1 += ans3;
    reverse(ans2.begin(), ans2.end());
    ans1 += ans2;
    cout << ans1.size() << nl;
    cout << ans1 << nl;
    return 0;
}