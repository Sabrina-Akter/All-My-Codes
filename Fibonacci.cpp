#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

ll f(ll n)
{
    if((n==0) || (n==1))
        return n;
    return f(n - 1) + f(n - 2);
}

int main()
{
    fastt;
    ll n;
    cin >> n;
    cout << f(n);
    return 0;
}
