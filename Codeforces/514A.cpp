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
    string s;
    cin >> s;
    ll i;
    for(i=0;i<s.size();i++)
    {
        int x = s[i]-'0', y = 9-x;
        if(i==0)
        {
            if(y<x)
            {
                if(y!=0)
                {
                    cout << y;
                }
                else
                {
                    cout << x;
                }
            }
            else if(x<=y)
            {
                if(y!=0)
                {
                    cout << x;
                }
                else
                {
                    cout << y;
                }
            }
        }
        else
        {
            if(y<x)
            {
                cout << y;
            }
            else if(x<=y)
            {
                cout << x;
            }
        }
    }
    return 0;
}