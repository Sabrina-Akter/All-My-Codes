#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define vll vector<ll>
#define pb push_back

int main()
{
    ll b, c, d, t;
    cin >> t;

    while (t--)
    {
        cin >> b >> c >> d;
        ll result = (((b ^ d) | b) - ((b ^ d) & c) == d) ? (b ^ d) : -1;
        cout << result << endl;
    }

    return 0;
}
