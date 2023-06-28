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
        ll n, i, j, k, x, cnt = 0, flag = 0, y;
        cin >> n;
        string s, a;
        char c;
        cin >> s;
        a = s;
        x = s.size() - 1;
        y = s.size() - 1;
        sort(all(s));
        if (s == a)
        {
            cout << 0 << nl;
        }
        else
        {
            while (1)
            {
                vll v;
                for (i = 0; i < s.size(); i++)
                {
                    if (s == a)
                    {
                        break;
                    }
                    else if (s[i] != a[i])
                    {
                        x = y;
                        for (j = x; j >= i; j--)
                        {
                            if (s[i] != a[i] && s[j] != a[j] && i <= j && a[i] == s[j] && a[j] == s[i] && s[i] != s[j])
                            {
                                v.pb(i + 1);
                                v.pb(j + 1);
                                c = s[i];
                                s[i] = s[j];
                                s[j] = c;
                                i++;
                                y=j;
                            }
                        }
                    }
                }
                if (flag == 1 || s == a)
                {
                    cnt++;
                    cout << cnt << nl;
                    cout << v.size() << " ";
                    sort(all(v));
                    for (k = 0; k < v.size(); k++)
                    {
                        cout << v[k] << " ";
                    }
                    cout << nl;
                    break;
                }
                cnt++;
                cout << cnt << nl;
                cout << v.size() << " ";
                sort(all(v));
                for (k = 0; k < v.size(); k++)
                {
                    cout << v[k] << " ";
                }
                cout << nl;
            }
        }
    }
    return 0;
}