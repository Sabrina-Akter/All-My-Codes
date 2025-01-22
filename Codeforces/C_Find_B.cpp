#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vll vector<ll>
#define pb push_back

int main()
{
    int t, n, q, a, l, r;
    cin >> t;

    while (t--)
    {
        cin >> n >> q;
        vll A(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            A[i] = A[i - 1] + a - 1 - (a == 1);
        }

        while (q--)
        {
            cin >> l >> r;
            if (l != r && A[r] >= A[l - 1])
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
