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
    string s;
    vector <pair<int, string>> p(n);
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        p[i] = {s.size(), s};
    }
    sort(all(p));
    bool yes = true;
    size_t length;
    for(int i = 0; i < n - 1; i++)
    {
        string s1 = p[i].second;
        string s2 = p[i + 1].second;
        length = s2.find(s1);
        if(length == string::npos)
        {
            yes = false;
            break;
        }
    }
    if(yes == false) cout << "NO" << nl;
    else
    {
        cout << "YES" << nl;
        for(int i = 0; i < n; i++) cout << p[i].second << nl;
    }
    return 0;
}
