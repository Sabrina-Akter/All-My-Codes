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

const int MOD = 1000000007;
const char nl = '\n';

int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // King's Moves
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; // King's Moves

int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    while (t--)
    {
        ll i, n, num = 0, m, ans = 0, flag = 0;
        double M;
        vector<double> v;
        cin >> n;
        string s;
        cin >> s;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == '*')
            {
                if (i - 1 >= 0)
                {
                    s[i - 1] = 'd';
                }
                if (i + 1 <= (n - 1))
                {
                    s[i + 1] = 'd';
                }
            }
        }
        for (i = 0; i < s.size(); i++)
        {
            if (i == (s.size() - 1))
            {
                if (s[i] == '.')
                {
                    num++;
                }
                if(num!=0)
                {
                    v.pb(num);
                }
            }
            else
            {
                if (s[i] == '.')
                {
                    num++;
                    flag = 1;
                }
                else if ((s[i] == '*' || s[i] == 'd') && (flag == 1))
                {
                    if(num!=0)
                    {
                        v.pb(num);
                        num = 0;
                        flag = 0;
                    }
                }
            }
        }
        if (v.size() >= 1)
        {
            for (i = 0; i < v.size(); i++)
            {
                m = v[i] / 3;
                M = v[i] / 3;
                if (m != M)
                {
                    m++;
                }
                ans += m;
            }
        }
        cout << ans << nl;
    }
    return 0;
}
