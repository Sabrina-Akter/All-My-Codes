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
    string s1, s2, s3;
    cin >> s1;
    for(ll i = 0; i < s1.size(); i++)
    {
        ll n = s2.size();
        if(s1.size() >= 2 && s1[i] == s2[n - 1] && s1[i] == s2[n - 2]) continue;
        else s2 += s1[i];
    }
    ll x = 0;
    for(ll i = 0; i < s2.size(); i++)
    {
        if((i + 1 < s2.size()) && (s2[i] == s2[i + 1]))
        {
            s3 += s2[i];
            if(x % 2 == 0) s3 += s2[i];
            x++;
            i++;
        }
        else
        {
            s3 += s2[i];
            x = 0;
        }
    }
    cout << s3 << nl;
    return 0;
}