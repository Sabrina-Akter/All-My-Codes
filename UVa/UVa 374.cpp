#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll BigMod(ll a, ll b, ll m)
{
    if(b==0)
    {
        return 1;
    }
    else if(b%2==1)
    {
        ll part1 = a%m;
        ll part2 = BigMod(a, b-1, m);
        return (part1*part2)%m;
    }
    else if(b%2==0)
    {
        ll half = BigMod(a, b/2, m);
        return (half*half)%m;
    }
}

int main()
{
    ll a, b, m;
    while(cin >> a >> b >> m)
    {
        cout << BigMod(a, b, m) << endl;;
    }
    return 0;
}
