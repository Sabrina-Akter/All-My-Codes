#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, k, i, x, M, N;
    cin >> n >> k;
    ll A[n+5];
    vector <pair<ll, ll> > v;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.pb({x,i});
    }
    sort(v.begin(),v.end());
    M = k/n;
    N = k%n;
    fill(A,A+n,M);
    for(i=0;i<N;i++)
    {
        x = v[i].second;
        A[x]++;
    }
    for(i=0;i<n;i++)
    {
        cout << A[i] <<endl;
    }
    return 0;
}
