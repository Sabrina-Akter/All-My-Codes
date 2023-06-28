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
    ll i, j, k, t, n, flag = 0, sum, N;
    vll v;
    unordered_map<ll, ll> m;
    for (i = 2; i <= 10000; i++)
    {
        flag = 0;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            v.pb(i);
            m[i] = 1;
        }
    }
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            sum = 0;
            for (j = 1; j <= n; j++)
            {
                if (i == n)
                {
                    if(j==n)
                    {
                        for (k = 0; k < v.size(); k++)
                        {
                            if (v[k] > sum)
                            {
                                if (m[v[k] - sum] == 0)
                                {
                                    cout << v[k] - sum;
                                    N = v[k]-sum;
                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        cout << N << " ";
                        sum = N*(n-1);
                    }
                }
                else
                {
                    if (j == n)
                    {
                        for (k = 0; k < v.size(); k++)
                        {
                            if (v[k] > sum)
                            {
                                if (m[v[k] - sum] == 0)
                                {
                                    cout << v[k] - sum;
                                    N = v[k]-sum;
                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        cout << 1 << " ";
                        sum++;
                    }
                }
            }
            cout << nl;
        }
    }
    return 0;
}