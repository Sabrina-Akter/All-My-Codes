#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    for (int i = 1; i <= 100000; ++i)
        s += to_string(i);

    cout << s[n - 1];
    return 0;
}