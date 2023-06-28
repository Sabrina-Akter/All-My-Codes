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
    ll n, cs=0;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        cs++;
        cout << "Case " << cs << ": ";
        string s, x;
        getline(cin, s);
        s+=' ';
        string a = "SELISE", b = "Digital", c = "Platforms";
        sort(all(a));
        sort(all(b));
        sort(all(c));
        ll i, f1=0, f2=0, cnt2=0;
        vector <string> v;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                cnt2++;
                sort(all(x));
                if(x==a)
                {
                    f1=1;
                }
                v.pb(x);
                if(cnt2>=3)
                {
                    string aa, bb, cc;
                    cc = v[v.size()-1];
                    bb = v[v.size()-2];
                    aa = v[v.size()-3];
                    if(a==aa && b==bb && c==cc)
                    {
                        f2=1;
                    }
                }
                x="";
            }
            else
            {
                x+=s[i];
            }
        }
        if(f1==1 && f2==1)
        {
            cout << "BOTH" << nl;
        }
        else if(f1==1)
        {
            cout << "SELISE" << nl;
        }
        else if(f2==1)
        {
            cout << "SELISE Digital Platforms" << nl;
        }
        else
        {
            cout << "NONE" << nl;
        }
    }
    return 0;
}