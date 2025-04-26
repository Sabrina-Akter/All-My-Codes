#include <bits/stdc++.h>
using namespace std;

int n, c, i, j, x, y;

int main()
{
    string s;
    cin >> n >> s;
    for (i = 0; i < n; ++i, x = y = 0)
        for (j = i; j < n; ++j, c += !(x | y))
            s[j] == 'L' ? --x : s[j] == 'R' ? ++x : s[j] == 'U' ? --y : ++y;
    cout << c;
    return 0;
}