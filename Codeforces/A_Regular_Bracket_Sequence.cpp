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
        string s;
        cin >> s;
        if(s.size()%2==0)
        {
            if((s[0]=='(' || s[0]=='?') && (s[s.size()-1]==')' || s[s.size()-1]=='?'))
            {
                deque <char> d;
                ll i, q=0, f=0, c=0;
                for(i=0;i<s.size();i++)
                {
                    if(s[i]=='(')
                    {
                        d.pb('(');
                    }
                    else if(s[i]==')')
                    {
                        c++;
                        if(d.size()==0)
                        {
                            if(q>=c)
                            {
                                c--;
                                q--;
                            }
                            else
                            {
                                f=1;
                            }
                        }
                        else
                        {
                            d.pop_back();
                            c--;
                        }
                    }
                    else if(s[i]=='?')
                    {
                        q++;
                    }
                }
                if(d.size()<=q && f==0)
                {
                    cout << "YES" << nl;
                }
                else if(d.size()>q || f==1)
                {
                    cout << "NO" << nl;
                }
            }
            else
            {
                cout << "NO" << nl;
            }
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}