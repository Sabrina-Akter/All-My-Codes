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
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        unordered_map <char, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int ans = 0;
        int rest = 0;
        for(int i = 0; i < 26; i++)
        {
            char small = 'a' + i;
            char cap = 'A' + i;
            int mx = max(mp[small], mp[cap]);
            int mn = min(mp[small], mp[cap]);
            ans += mn;
            int temp = mx - mn;
            if(temp % 2 == 1) temp--;
            rest += temp;
        }
        rest /= 2;
        ans += min(rest, x);
        cout << ans << nl;
    }
    return 0;
}