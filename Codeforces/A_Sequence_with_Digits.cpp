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
        ll x, n, i, j;
        cin >> x >> n;
        vll v(n);
        v[0] = x;
        for(i=1;i<n;i++)
        {
            string s = to_string(v[i-1]);
            string min_char = "9", max_char = "0";
            for(j=0;j<s.size();j++)
            {
                if(s[j]>max_char[0])
                {
                    max_char = s[j];
                }
                if(s[j]<min_char[0])
                {
                    min_char = s[j];
                }
            }
            int a = stoi(max_char), b = stoi(min_char);
            v[i] = v[i-1] + (a*b);
        }
        cout << v[n-1] << nl;
    }
    return 0;
}