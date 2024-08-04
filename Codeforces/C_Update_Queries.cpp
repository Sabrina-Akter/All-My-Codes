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
        ll n, m;
        cin >> n >> m;
        string s, c;
        cin >> s;
        vll v(m);
        for(int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        cin >> c;
        sort(all(v));
        sort(all(c));
        unordered_map <int, char> mp;
        int j = 0;
        for(int i = 0; i < m; i++)
        {
            if(i == 0)
            {
                mp[v[i] - 1] = c[j];
                j++;
            }
            else
            {
                if(v[i] != v[i - 1])
                {
                    mp[v[i] - 1] = c[j];
                    j++;
                }
            }
        }
        for(auto &it : mp)
        {
            s[it.first] = it.second;
        }
        cout << s << nl;
    }
    return 0;
}