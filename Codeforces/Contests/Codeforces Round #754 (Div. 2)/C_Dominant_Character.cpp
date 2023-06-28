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
        ll i, n, x, flag=0;
        cin >> n;
        string s;
        cin >> s;
        vll v;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='a' && s[i+1]=='a')
            {
                flag=1;
                x = 2;
            }
            else if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='a')
            {
                flag=1;
                x = 3;
            }
            else if(s[i]=='a' && s[i+1]=='c' && s[i+2]=='a')
            {
                flag=1;
                x = 3;
            }
            else if(s[i]=='a' && s[i+1]=='c' && s[i+2]=='b' && s[i+3]=='a')
            {
                flag=1;
                x = 4;
            }
            else if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c' && s[i+3]=='a')
            {
                flag=1;
                x = 4;
            }
            else if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='b' && s[i+3]=='a' && s[i+4]=='c' && s[i+5]=='c' && s[i+6]=='a')
            {
                flag=1;
                x = 7;
            }
            else if(s[i]=='a' && s[i+1]=='c' && s[i+2]=='c' && s[i+3]=='a' && s[i+4]=='b' && s[i+5]=='b' && s[i+6]=='a')
            {
                flag=1;
                x = 7;
            }
            if(flag==1)
            {
                v.pb(x);
            }
        }
        if(flag==0)
        {
            cout << -1 << nl;
        }
        else
        {
            sort(all(v));
            cout << v[0] << nl;
        }
    }
    return 0;
}