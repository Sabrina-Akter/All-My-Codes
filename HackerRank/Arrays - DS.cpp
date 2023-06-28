#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll n, i;
    cin >> n;
    ll A[n];
    for(i=0;i<n;i++)
    {
        cin >> A[i];
    }
    for(i=n-1;i>=0;i--)
    {
        cout << A[i] << " ";
    }
    return 0;
}
