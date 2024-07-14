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

string f(string s, char c)
{
    stack <char> st;
    for(int i = 0; i < s.size(); i++)
    {
        if(st.size() > 0 && s[i] == 'B' && st.top() == c)
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    string x;
    while(st.empty() == false)
    {
        x += st.top();
        st.pop();
    }
    reverse(all(x));
    return x;
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        string x, y;
        x = f(s, 'A');
        y = f(x, 'B');
        ll ans1 = y.size();
        x = f(s, 'B');
        y = f(x, 'A');
        ll ans2 = y.size();
        cout << min(ans1, ans2) << nl;
    }
    return 0;
}