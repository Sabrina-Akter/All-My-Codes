#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll n, i, sum=0, q, l, r;
    cin >> n;
    ll A[n+5]={0};
    ll PS[n+5]={0};
    for(i=1;i<=n;i++)
    {
        cin >> A[i];
        sum+=A[i];
        PS[i] = sum;
    }
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> l >> r;
        l++, r++;
        cout << PS[r]-PS[l-1] << endl;
    }
    return 0;
}
