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
    while (t--)
    {
        string a, s, b;
        cin >> a >> s;
        int i, j = 0, f = 0;
        reverse(all(a));
        reverse(all(s));
        for (i = 0; i < s.size(); i++)
        {
            if (j >= a.size())
            {
                a += '0';
            }
            string test1, test2;
            test1 += a[j], test2 += s[i];
            int num1 = stoi(test1), num2 = stoi(test2), num3;
            if (num2 < num1)
            {
                test2 = "";
                if(i+1<s.size())
                {
                    test2 += s[i + 1];
                }
                else
                {
                    f=1;
                    break;
                }
                test2 += s[i];
                num2 = stoi(test2);
                i++;
            }
            num3 = num2 - num1;
            if (num3 > 9 || num3 < 0)
            {
                f = 1;
                break;
            }
            b += to_string(num3);
            j++;
        }
        reverse(all(b));
        int flag = 0;
        string res;
        if (f == 1 || a.size() != b.size())
        {
            cout << -1 << nl;
        }
        else
        {
            for (i = 0; i < b.size(); i++)
            {
                if (flag == 0 && b[i] == '0')
                {
                    continue;
                }
                else
                {
                    res += b[i];
                    flag = 1;
                }
            }
            cout << res << nl;
        }
    }
    return 0;
}