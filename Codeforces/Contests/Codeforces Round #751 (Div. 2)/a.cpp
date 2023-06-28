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
    ll i, j, t;
    string S="abcdefghijklmnopqrstuvwxyz";
    cin >> t;
    while(t--)
    {
        ll n, flag=0;
        char c;
        string s;
        cin >> s;
        unordered_map <ll, ll> m;
        for(i=0;i<S.size();i++)
        {
            for(j=0;j<s.size();j++)
            {
                if(S[i]==s[j])
                {
                    cout << s[j] << " ";
                    flag=1;
                    n = j;
                    c = s[j];
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        for(j=0;j<s.size();j++)
        {
            if(s[j]>=c && j!=n)
            {
                cout << s[j];
            }
        }
        cout << nl;
    }
    return 0;
}