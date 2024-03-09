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
        string s;
        cin >> s;
        ll n = s.size();
        unordered_map <char, ll> freq;
        unordered_map <string, ll> dbl;
        for(int i = 0; i < n; i++)
        {
            freq[s[i]]++;
        }
        string temp;
        for(int i = 0; i < s.size(); i++)
        {
            temp += s[i];
            if(temp.size() == 2)
            {
                dbl[temp]++;
                temp = s[i];
            }
        }
        ll mx = 2;
        for(auto &it : freq)
        {
            mx = max(mx, it.second);
        }
        for(int i = 0; i <= 9; i++)
        {
            for(int j = 0; j <= 9; j++)
            {
                ll cnt = 0;
                bool flag = true;
                
                for(ll k = 0; k < n; k++)
                {
                    if(flag == true && s[k] == '0' + i)
                    {
                        cnt++;
                        flag = false;
                    }
                    else if(flag == false && s[k] == '0' + j)
                    {
                        cnt++;
                        flag = true;
                    }
                }
                if(cnt % 2 != 0) cnt--;
                mx = max(mx, cnt);
            }
        }
        cout << n - mx << nl;
    }
    return 0;
}