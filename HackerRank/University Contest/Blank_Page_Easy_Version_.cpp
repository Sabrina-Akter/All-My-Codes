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

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll i, j, w, n=0;
        cin >> w;
        string s, a="";
        vector <string> v;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='-')
            {
                v.pb(a);
                a = "";
            }
            else if(i==s.size()-1)
            {
                a.pb(s[i]);
                v.pb(a);
                a = "";
            }
            else
            {
                a.pb(s[i]);
            }
        }
        for(i=0;i<s.size();i++)
        {
            for(j=1;j<=w;j++)
            {
                if(s[i]=='-')
                {
                    n++;
                    if(v[n].size()>(w-j))
                    {
                        cout << s[i];
                        i++;
                        break;
                    }
                    else
                    {
                        cout << s[i];
                    }
                }
                else
                {
                    cout<<s[i];
                }
                i++;
                if(i==s.size())
                {
                    break;
                }
            }
            cout << nl;
            i--;
        }
    }
    return 0;
}