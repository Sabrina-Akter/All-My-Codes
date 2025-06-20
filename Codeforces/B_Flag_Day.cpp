#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define pb push_back

int a[100005];

int main()
{
    ios_base::sync_with_stdio(false);

    int n, m, x, y, z;
    cin >> n >> m;

    while (m-- > 0)
    {
        cin >> x >> y >> z;

        if (a[x] != 0)
        {
            a[y] = a[x] % 3 + 1;
            a[z] = a[y] % 3 + 1;
        }
        else if (a[y] != 0)
        {
            a[z] = a[y] % 3 + 1;
            a[x] = a[z] % 3 + 1;
        }
        else
        {
            if (a[z] == 0)
            {
                a[z] = 1;
            }

            a[x] = a[z] % 3 + 1;
            a[y] = a[x] % 3 + 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}