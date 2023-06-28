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
    string a, b, s1, s2, s3, s4, N;
    cin >> a >> b;
    ll i, k, cnt = 0, zero = 0, one = 0, two = 0, three = 0, first = -1, second = -1, div, rem, ans, l1 = 0, l2 = 0, l3 = 0, l4 = 0;
    char c;
    cin >> k >> c;
    s1 = a, s2 = a + b, s3 = s2 + b, s4 = s3 + a;
    N = a + b;
    for (i = 0; i < a.size(); i++)
    {
        if (a[i] == c)
        {
            cnt++;
        }
        if (cnt == 1 && a[i] == c)
        {
            first = i + 1;
            l1 = 1;
        }
        if (cnt == 2 && a[i] == c)
        {
            second = i + 1;
            l2 = 1;
        }
    }
    if (l2 == 0)
    {
        for (i = 0; i < N.size(); i++)
        {
            if (N[i] == c)
            {
                cnt++;
            }
            if (cnt == 1 && N[i] == c)
            {
                first = i + 1;
                l3 = 1;
            }
            if (cnt == 2 && N[i] == c)
            {
                second = i + 1;
                l4 = 1;
            }
        }
    }
    if (cnt < 2)
    {
        cout << -1 << nl;
    }
    else if (k == 1 && l2 == 0)
    {
        cout << -1 << nl;
    }
    else if (k == 2 && l2 == 0 && l4 == 0)
    {
        cout << -1 << nl;
    }
    else
    {
        //A
        for (i = s1.size() - 1; i >= 0; i--)
        {
            if (s1[i] == c)
            {
                one = i + 1;
                break;
            }
        }
        //AB
        for (i = s2.size() - 1; i >= 0; i--)
        {
            if (s2[i] == c)
            {
                two = i + 1;
                break;
            }
        }
        //ABB
        for (i = s3.size() - 1; i >= 0; i--)
        {
            if (s3[i] == c)
            {
                three = i + 1;
                break;
            }
        }
        //ABBA
        for (i = s4.size() - 1; i >= 0; i--)
        {
            if (s4[i] == c)
            {
                zero = i + 1;
                break;
            }
        }
        cout << second - first << " ";
        if (k <= 4)
        {
            if (k == 1)
            {
                cout << one - first << nl;
            }
            else if (k == 2)
            {
                cout << two - first << nl;
            }
            if (k == 3)
            {
                cout << three - first << nl;
            }
            if (k == 4)
            {
                cout << zero - first << nl;
            }
        }
        else
        {
            div = (k / 4);
            rem = k % 4;
            ans = div * (s4.size());
            if (rem == 1)
            {
                ans += one;
            }
            else if (rem == 2)
            {
                ans += two;
            }
            else if (rem == 3)
            {
                ans += three;
            }
            cout << ans - first << nl;
        }
    }
    return 0;
}