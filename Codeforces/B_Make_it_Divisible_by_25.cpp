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
        ll i, a=100, b=100, c=100, d =100, f1=0, f2=0, f3=0, f4=0, w=0, x=0, y=0, z=0;
        string s;
        cin >> s;
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0' && f1==0)
            {
                f1=1;
            }
            else if(s[i]=='0' && f1==1)
            {
                x = i+2;
                a = s.size()-x;
                break;
            }
        }
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='5' && f2==0)
            {
                f2=1;
            }
            else if(s[i]=='2' && f2==1)
            {
                y = i+2;
                b = s.size()-y;
                break;
            }
        }
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='5' && f3==0)
            {
                f3=1;
            }
            else if(s[i]=='7' && f3==1)
            {
                z = i+2;
                c = s.size()-z;
                break;
            }
        }
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0' && f4==0)
            {
                f4=1;
            }
            else if(s[i]=='5' && f4==1)
            {
                w = i+2;
                d = s.size()-w;
                break;
            }
        }
        cout << min(min(min(a,b), min(b,c)), min(min(b,c), min(c,d))) << nl;
    }
    return 0;
}