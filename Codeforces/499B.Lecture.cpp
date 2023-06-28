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
    ll n, m, i, d;
    cin >> n >> m;
    string a, b, s;
    unordered_map<string, ll> m1, m2;
    unordered_map<ll, string> m3, m4;
    for (i = 1; i <= m; i++)
    {
        cin >> a >> b;
        m1[a] = i;
        m3[i] = a;
        m2[b] = i;
        m4[i] = b;
    }
    for (i = 0; i < n; i++)
    {
        cin >> s;
        if (m1[s] != 0)
        {
            d = m1[s];
            a = m3[d], b = m4[d];
        }
        else if (m2[s] != 0)
        {
            d = m2[s];
            a = m3[d], b = m4[d];
        }
        if (a.size() <= b.size())
        {
            cout << a << " ";
        }
        else
        {
            cout << b << " ";
        }
    }
    return 0;
}