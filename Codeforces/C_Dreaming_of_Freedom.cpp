#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        int i;
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (n % i != 0)
        {
            i = n;
        }
        cout << (i <= m ? "NO" : "YES") << endl;
    }
    return 0;
}
