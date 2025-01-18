#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n + 1);
    vector<vector<int>> ans(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i];
        int x = i, y = i;
        for (int j = 1; j <= p[i]; ++j)
        {
            ans[x][y] = p[i];
            if (y > 1 && !ans[x][y - 1])
            {
                --y;
            }
            else
            {
                ++x;
            }
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
