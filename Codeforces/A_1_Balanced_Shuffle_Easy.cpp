#include <bits/stdc++.h>
using namespace std;

const int N = 500009;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    vector<pair<int, int>> a(n);

    int x = 0;
    for (int i = 0; i < n; ++i)
    {
        a[i] = {x, -i};
        x += (s[i] == '(' ? 1 : -1);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; ++i)
    {
        cout << s[-a[i].second];
    }

    return 0;
}
