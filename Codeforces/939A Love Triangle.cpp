#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(n) for(ll i=0;i<n;i++)
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, first, last, flag=0;
    cin >> n;
    ll A[n+1], B[n+1];
    for(i=1;i<=n;i++)
    {
        cin >> A[i];
        B[i] = A[i];
    }
    for(i=1;i<=n;i++)
    {
        first = A[i];
        last = A[A[A[A[i]]]];
        if(first==last)
        {
            flag = 1;
            cout << "YES" << endl;
            break;
        }
    }
    if(flag==0)
    {
        cout << "NO" << endl;
    }
    return 0;
}
