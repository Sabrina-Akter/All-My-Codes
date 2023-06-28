#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000

ll x;
ll A[10];
ll dp(ll n, ll sum)
{
    cout << sum << endl;
    dp(n+1, sum+abs(A[n]-A[n+1]));
}

int main()
{
    fastt;
    ll n, i;
    cin >> n;
    x = n-1;
    for(i=0;i<n;i++)
    {
        cin >> A[i];
    }
    dp(0, 0);
    return 0;
}
