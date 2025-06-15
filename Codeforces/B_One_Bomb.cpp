#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define pb push_back

int i, j, a[1005], b[1005], k, s, n, m;
char c[1005][1005];

int main()
{
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> c[i][j];
            if (c[i][j] == '*')
            {
                k++;
                a[i]++;
                b[j]++;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            s = a[i] + b[j];
            if (c[i][j] == '*')
            {
                s--;
            }
            if (s == k)
            {
                cout << "YES" << endl << i + 1 << " " << j + 1;
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}