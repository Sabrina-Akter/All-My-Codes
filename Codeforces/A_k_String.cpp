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
    map <char, ll> freq, copy;
    string s;
    cin >> s;
    for(ll i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;
        copy[s[i]]++;
    }
    ll mn = LONG_LONG_MAX;
    bool okay = true;
    for(auto &it : freq)
    {
        if(it.second % n != 0)
        {
            okay = false;
            break;
        }
    }
    if(okay == false)
    {
        cout << -1 << endl;
    }
    else
    {
        string ans;
        bool done = false;
        while(1)
        {
            for(auto &it : freq)
            {
                if(it.second == 0)
                {
                    done = true;
                    break;
                } 
                ll x = copy[it.first] / n;
                for(ll i = 0; i < x; i++)
                {
                    ans += it.first;
                }
                freq[it.first] -= x;
            }
            if(done == true) break;
        }
        cout << ans << endl;
    }
    return 0;
}