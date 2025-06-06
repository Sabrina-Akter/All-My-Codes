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
        ll i, n, sum=0;
        cin >> n;
        string s;
        cin >> s;
        deque <char> d1, d2;
        for(i=0;i<s.size();i++)
        {
            if(i==0)
            {
                d1.pb(s[i]);
                d2.pb(s[i]);
            }
            else
            {
                d1.pb(s[i]);
                d2.push_front(s[i]);
                if(d1.size()==2)
                {
                    if(d1.front()=='(' && d1.back()=='(')
                    {
                        sum++;
                        d1.clear();
                        d2.clear();
                    }
                    else if(d1.front()==')' && d1.back()==')')
                    {
                        sum++;
                        d1.clear();
                        d2.clear();
                    }
                    else if(d1.front()=='(' && d1.back()==')')
                    {
                        sum++;
                        d1.clear();
                        d2.clear();
                    }
                }
                else if(d1==d2 && d1.size()==d2.size() && d1.size()>=2)
                {
                    sum++;
                    d1.clear();
                    d2.clear();
                }
            }
        }
        cout << sum << " " << d1.size() << nl;
    }
    return 0;
}