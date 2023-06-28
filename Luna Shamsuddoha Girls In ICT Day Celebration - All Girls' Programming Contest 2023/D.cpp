#include <bits/stdc++.h>
using namespace std;

#define fastt                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)
#define pll pair<ll, ll>
#define plll pair<pll, ll>

const int MOD = 1000000007;
const char nl = '\n';

int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // L, R, D, U, TR, BR, TL, BL
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; //

int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        reverse(all(s));
        ll i;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                if (s[i] == ' ')
                {
                    continue;
                }
                else
                {
                    s[i]--;
                    if (s[i] == 'e')
                    {
                        s[i] = 'd';
                    }
                    else if (s[i] == 'i')
                    {
                        s[i] = 'h';
                    }
                    else if (s[i] == 'o')
                    {
                        s[i] = 'n';
                    }
                    else if (s[i] == 'u')
                    {
                        s[i] = 't';
                    }
                    else if (s[i] == 'a')
                    {
                        s[i] = 'z';
                    }
                }
            }
        }
        cout << s << nl;
    }
    return 0;
}