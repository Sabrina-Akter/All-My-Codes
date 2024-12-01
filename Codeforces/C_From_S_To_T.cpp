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
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        if(s1.size() > s2.size()) cout << "NO" << nl;
        else if(s1.size() == s2.size())
        {
            if(s1 == s2) cout << "YES" << nl;
            else cout << "NO" << nl;
        }
        else
        {
            unordered_map <char, ll> cnt;
            for(int i = 0; i < s3.size(); i++) cnt[s3[i]]++;
            ll x = 0, y = 0;
            bool ok = true;
            while(y < s2.size())
            {
                if(s1[x] == s2[y])
                {
                    x++;
                    y++;
                }
                else
                {
                    if(cnt[s2[y]] > 0)
                    {
                        cnt[s2[y]]--;
                        y++;
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
            }
            if(ok && x == s1.size()) cout << "YES" << nl;
            else cout << "NO" << nl;
        }
    }
    return 0;
}