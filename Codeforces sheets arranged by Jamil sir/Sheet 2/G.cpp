#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, f;
    cin >> t;
    for(i=0;i<t;i++)
    {
        f = 1;
        cin >> n;
        for(j=1;j<=n;j++)
        {
            f = f * j;
        }
        cout << f << "\n";
    }
    return 0;
}
