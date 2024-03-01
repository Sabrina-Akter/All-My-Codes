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
    string s;
    cin >> s;
    bool found = false;
    for(int i = 0; i <= 1000; i += 8)
    {
        string temp = to_string(i);
        if(temp.size() <= s.size())
        {
            int x = 0;
            string ans;
            for(int j = 0; j < temp.size(); j++)
            {
                for(int k = x; k < s.size(); k++)
                {
                    if(temp[j] == s[k])
                    {
                        x = k + 1;
                        ans += temp[j];
                        break;
                    }
                }
            }
            if(ans.size() == temp.size())
            {
                found = true;
                cout << "YES" << nl;
                cout << ans << nl;
                break;
            }
        }
    }
    if(found == false) cout << "NO" << nl;
    return 0;
}