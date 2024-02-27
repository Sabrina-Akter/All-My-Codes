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
    ll n, x;
    cin >> n;
    vll f, s;
    ll sum_f = 0, sum_s = 0;
    string last;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x > 0) 
        {
            f.pb(x);
            sum_f += x;
            if(i == n - 1) last = "first";
        }
        else
        {
            s.pb(abs(x));
            sum_s += abs(x);
            if(i == n - 1) last = "second";
        }
    }
    if(sum_f != sum_s) sum_f > sum_s ? last = "first" : last = "second";
    else
    {
        ll i_f = 0, i_s = 0;
        while(1)
        {
            if(i_f == f.size() || i_s == s.size()) break;
            if(f[i_f] > s[i_s])
            {
                last = "first";
                break;
            }
            else if(s[i_s] > f[i_f])
            {
                last = "second";
                break;
            }
            i_f++;
            i_s++;
        }
    }
    cout << last << nl;
    return 0;
}