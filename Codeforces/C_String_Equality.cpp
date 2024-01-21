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
        ll n, k;
        cin >> n >> k;
        string a, b;
        cin >> a >> b;
        map <char, ll> exist, aa, bb;
        for(auto &c : a)
        {
            exist[c]++;
        }
        for(auto &c : b)
        {
            exist[c]--;
        }
        for(auto &c : exist)
        {
            if(c.second != 0)
            {
                if(c.second > 0) aa[c.first] = c.second;
                else bb[c.first] = (-1)*(c.second);
            }
        }
        bool ans = true;
        for(auto &it1 : aa)
        {
            ll need = it1.second;
            if(need % k != 0)
            {
                ans = false;
                break;
            }
            else
            {
                for(auto &it2 : bb)
                {
                    if(it2.second % k == 0 && it2.second != 0 && it1.first < it2.first)
                    {
                        ll mn = min(need, it2.second);
                        need -= mn;
                        bb[it2.first] -= mn;
                        if(need == 0) break;
                    }
                }
                if(need != 0) 
                {
                    ans = false;
                    break;
                }
            }
        }
        if(ans == true) cout << "Yes" << nl;
        else cout << "No" << nl;
    }
    return 0;
}