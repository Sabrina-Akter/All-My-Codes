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

ll f(ll n)
{
    ll ans = 0;
    ll times = 1;
    while(n != 0)
    {
        ans += (times * (n % 10));
        n /= 10;
    }
    return ans;
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m, size;
        cin >> n >> m;
        ll total_n = f(n);
        if(total_n <= m)
        {
            cout << 0 << nl;
        }
        else
        {   
            string s = to_string(n);
            size = s.size();
            for(int i = 0; i < size; i++)
            {
                reverse(all(s));
                s[i] = '0';
                if(i + 1 == s.size())
                {
                    s.pb('1');
                }
                else
                {
                    if(s[i + 1] == '9')
                    {
                        int j = i;
                        while(1)
                        {   
                            if(j + 1 == size)
                            {
                                s.pb('1');
                                break;
                            }
                            else if(s[j + 1] == '9')
                            {
                                s[j + 1] = '0';
                                j++;
                            }
                            else
                            {
                                s[j + 1]++;
                                break;
                            }
                        }
                        s[i + 1] = '0';
                    }
                    else
                    {
                        s[i + 1]++;
                    }
                }
                reverse(all(s));
                ll num = f(stoll(s));
                if(num <= m)
                {
                    cout << stoll(s) - n << nl;
                    break;
                }
            }
        }
    }
    return 0;
}