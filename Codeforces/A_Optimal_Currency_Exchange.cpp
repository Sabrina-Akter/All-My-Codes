#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define pb push_back
int n, a, b, x, r;
int main()
{
    cin >> n >> a >> b;
    r = n;
    for (; x * a <= n; x++) r = min(r, (n - x * a) % (5 * b));
    cout << r;
    return 0;
}
