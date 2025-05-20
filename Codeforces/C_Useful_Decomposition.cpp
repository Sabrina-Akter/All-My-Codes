#include <bits/stdc++.h>
using namespace std;

uint64_t n, i, a, b, w, c, cc;
vector<int> g[179000], l;

int main()
{
    cin >> n;
    for (i = 1; i < n; i++)
    {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (i = 1; i <= n; i++)
    {
        w = g[i].size();
        if (w == 1)
            l.push_back(i);
        else if (w > 2)
        {
            if (c > 0)
            {
                cout << "No";
                return 0;
            }
            else
            {
                c = 1;
                cc = i;
            }
        }
    }

    if (c == 0)
    {
        cc = l.back();
        l.pop_back();
    }

    cout << "Yes\n" << l.size() << '\n';
    for (auto e : l)
        cout << cc << " " << e << '\n';

    return 0;
}