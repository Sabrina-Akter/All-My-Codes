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
        ll i, ab=0, ba=0;
        string s;
        cin >> s;
        for(i=0;i<s.size()-1;i++)
        {
            if(s[i]=='a' && s[i+1]=='b')
            {
                ab++;
            }
            if(s[i]=='b' && s[i+1]=='a')
            {
                ba++;
            }
        }
        if(ab==ba)
        {
            cout << s << nl;
        }
        else
        {
            if(ab>ba)
            {
                if(s[0]=='a' && s[1]=='b')
                {
                    s[0]='b';
                    cout << s << nl;
                }
                else if((s[s.size()-2]=='a') && (s[s.size()-1]=='b'))
                {
                    s[s.size()-1]='a';
                    cout << s << nl;
                }
                else if((s[s.size()-2]=='b') && (s[s.size()-1]=='b'))
                {
                    s[s.size()-1]='a';
                    cout << s << nl;
                }
                else if((s[0]=='a') && (s[1]=='a'))
                {
                    s[0]='b';
                    cout << s << nl;
                }
            }
            else if(ba>ab)
            {
                if(s[0]=='b' && s[1]=='a')
                {
                    s[0]='a';
                    cout << s << nl;
                }
                else if((s[s.size()-2]=='b') && (s[s.size()-1]=='a'))
                {
                    s[s.size()-1]='b';
                    cout << s << nl;
                }
                else if((s[s.size()-2]=='a') && (s[s.size()-1]=='a'))
                {
                    s[s.size()-1]='b';
                    cout << s << nl;
                }
                else if((s[0]=='b') && (s[1]=='b'))
                {
                    s[0]='a';
                    cout << s << nl;
                }
            }
        }
    }
    return 0;
}