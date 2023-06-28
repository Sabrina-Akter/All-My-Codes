#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

ll A[10000005];

int main()
{
    fastt;
    ll n, m, i, l, r, k, MAX=0;
    cin >> n >> m;
    for(i=0;i<m;i++)
    {
        cin >> l >> r >> k;
        A[l]+=k;
        A[r+1]-=k;
    }
    for(i=1;i<=n;i++)
    {
        A[i] = A[i]+A[i-1];
        MAX = max(A[i], MAX);
    }
    cout << MAX << endl;
    return 0;
}
