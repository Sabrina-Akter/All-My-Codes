#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define pb push_back

int n, i, m;
string s;

int main()
{
    cin >> n >> s;
    for (i = 1; i <= n / 2; i++)
    {
        if (s.substr(0, i) == s.substr(i, i))
        {
            m = i - 1;
        }
    }
    cout << n - m;
    return 0;
}
