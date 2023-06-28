#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

ll f(ll *A, ll x, ll i, ll n)
{
    if(i>=n)
    {
        return 0;
    }
    else if(i>=x)
    {
        return A[i] + f(A, x, i+1, n);
    }
    return f(A, x, i+1, n);
}

int main()
{
    fastt;
    ll n, m, i, x;
    cin >> n >> m;
    x = n-m;
    ll A[n];
    for(i=0;i<n;i++)
    {
        cin >> A[i];
    }
    cout << f(A, x, 0, n);
    return 0;
}
