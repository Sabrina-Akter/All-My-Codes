#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, q, i, l, r;
        cin >> n >> q;
        ll A[n+5] = {0}, F[n+5] = {0}, B[n+5] = {0};
        for(i=1;i<=n;i++)
        {
            cin >> A[i];
        }
        for(i=1;i<=n;i++)
        {
            F[i] = __gcd(F[i-1], A[i]);
        }
        for(i=n;i>=1;i--)
        {
            B[i] = __gcd(B[i+1], A[i]);
        }
        for(i=0;i<q;i++)
        {
            cin >> l >> r;
            cout << __gcd(F[l-1], B[r+1]) << endl;
        }
    }
    return 0;
}
