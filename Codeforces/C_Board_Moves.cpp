#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll minMovesToCenter(int n) 
{
    ll m = n / 2; 
    return 8LL * m * (m + 1) * (2 * m + 1) / 6;
}

int main() 
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        cout << minMovesToCenter(n) << '\n';
    }
    return 0;
}