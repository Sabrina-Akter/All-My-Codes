#include <bits/stdc++.h>
using namespace std;

int i, k, n, t;

int main()
{
    cin >> n;

    while (n--)
    {
        cin >> k;
        
        if (k)
        {
            t++;
            if (++i == 1)
            {
                t++;
            }
        }
        else
        {
            i = 0;
        }
    }

    cout << t - (t > 0) << '\n';

    return 0;
}