#include <bits/stdc++.h>
using namespace std;

#define fastt                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll unsigned long long int
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

int X[] = {+0, +0, +1, -1, -1, +1, -1, +1}; // King's Moves
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1}; // King's Moves

int KX[] = {-2, -2, -1, -1, 1, 1, 2, 2}; // Knight's Move
int KY[] = {-1, 1, -2, 2, -2, 2, -1, 1}; // Knight's Move

int main()
{
    fastt;
    ll i, a, b, c, d, e, f, g, h, flag = 0;
    string s;
    cin >> s;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'S')
        {
            for (a = i + 1; a < s.size(); a++)
            {
                if (s[a] == 'a')
                {
                    for (b = a + 1; b < s.size(); b++)
                    {
                        if (s[b] == 'm')
                        {
                            for (c = b + 1; c < s.size(); c++)
                            {
                                if (s[c] == 's')
                                {
                                    for (d = c + 1; d < s.size(); d++)
                                    {
                                        if (s[d] == 'u')
                                        {
                                            for (e = d + 1; e < s.size(); e++)
                                            {
                                                if (s[e] == 'n')
                                                {
                                                    for (f = e + 1; f < s.size(); f++)
                                                    {
                                                        if (s[f] == 'g')
                                                        {
                                                            flag = 1;
                                                            break;
                                                        }
                                                    }
                                                    if (flag == 0)
                                                    {
                                                        break;
                                                    }
                                                }
                                                if (flag == 1)
                                                {
                                                    break;
                                                }
                                            }
                                            if (flag == 0)
                                            {
                                                break;
                                            }
                                        }
                                        if (flag == 1)
                                        {
                                            break;
                                        }
                                    }
                                    if (flag == 0)
                                    {
                                        break;
                                    }
                                }
                                if (flag == 1)
                                {
                                    break;
                                }
                            }
                            if (flag == 0)
                            {
                                break;
                            }
                        }
                        if (flag == 1)
                        {
                            break;
                        }
                    }
                    if (flag == 0)
                    {
                        break;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 1)
    {
        cout << "SRBD" << nl;
    }
    else
    {
        cout << "GHOST" << nl;
    }
    return 0;
}