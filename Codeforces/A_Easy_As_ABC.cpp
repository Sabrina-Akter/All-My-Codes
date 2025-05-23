#include <bits/stdc++.h>
using namespace std;

bool ok(int i, int j)
{
    return abs(i / 3 - j / 3) <= 1 && abs(i % 3 - j % 3) <= 1;
}

int main()
{
    vector<string> grid(3);
    for (int i = 0; i < 3; i++)
        cin >> grid[i];

    string s = grid[0] + grid[1] + grid[2];
    string p = "CCC", l;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            for (int k = 0; k < 9; k++)
            {
                if (i != j && j != k && k != i && ok(i, j) && ok(j, k))
                {
                    l = s[i];
                    l += s[j];
                    l += s[k];
                    p = min(p, l);
                }
            }
        }
    }

    cout << p << '\n';
    return 0;
}