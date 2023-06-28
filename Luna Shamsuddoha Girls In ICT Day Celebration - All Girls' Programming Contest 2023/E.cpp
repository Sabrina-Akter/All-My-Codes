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
    ll t, cs=0;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        cs++;
        string s;
        getline(cin, s);
        s+=' ';
        string x;
        map <string, ll> m;
        ll i, f=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                if(f==1)
                {
                    m[x]++;
                    x = "";
                    f=2;
                }
            }
            else
            {
                x+=s[i];
                f=1;
            }
        }
        cout << "Year-" << cs << nl;
        vector <pair<ll, string> > v;
        for(auto it:m)
        {
            v.push_back({it.second, it.first});
        }
        sort(all(v));
        for(i=v.size()-1;i>=0;i--)
        {
            cout << v[i].second << " " << v[i].first << nl;
        }
    }
    return 0;
}