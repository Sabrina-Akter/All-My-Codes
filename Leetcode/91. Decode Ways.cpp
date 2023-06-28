#include <bits/stdc++.h>
using namespace std;

map<pair<string, int>, int> m;

int f(string t, string s, int n)
{
    if (t[0] == '0' || (t.size() == 2 && stoi(t) > 26))
    {
        return m[{t, n}] = 0;
    }
    else if (n == s.size() - 1)
    {
        return m[{t, n}] = 1;
    }
    else if (m.find({t, n}) != m.end())
    {
        return m[{t, n}];
    }
    else
    {
        string x;
        x = s[n + 1];
        m[{t, n}] = f(x, s, n + 1);
        if (n + 2 <= s.size() - 1)
        {
            x+=s[n + 2];
            m[{t, n}] += f(x, s, n + 2);
        }
        return m[{t, n}];
    }
}

int numDecodings(string s)
{
    return f("", s, -1);
}

int main()
{
    string s;
    cin >> s;
    cout << numDecodings(s) << endl;
    return 0;
}