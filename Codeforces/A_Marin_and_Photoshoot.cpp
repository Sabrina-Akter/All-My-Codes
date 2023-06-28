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
        ll n, i, z=0, o=0, flag=0, c=0;
        cin >> n;
        string s;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                z++;
            }
            if(flag==0 && s[i]=='0')
            {
                flag=1;
            }
            else if(flag==1 && s[i]=='0')
            {
                if(o==1)
                {
                  c++;
                }
                else if(o==0)
                {
                    c+=2;
                }
                flag=0;
                i--;
                o = 0;
            }
            else if(flag==1 && s[i]=='1')
            {
                o++;
            }
        }
        cout << c << nl;
    }
    return 0;
}