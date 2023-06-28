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
        ll i, c, k, n=0, flag=0, f=0;
        cin >> c >> k;
        k++;
        string s;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                n++;
                if(n==k)
                {
                    cout << "yes" << nl;
                    f=1;
                    break;
                }
            }
            else if(s[i]=='1')
            {
                n=0;
            }
            if(f==1)
            {
                break;
            }
        }
        if(f==0)
        {
            cout << "no" << nl;
        }
    }
    return 0;
}