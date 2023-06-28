#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

ll f(ll a[], ll n, ll k)
{
    ll C1=0, C2=0, MAX, i;
    map <ll, ll> m;
    for(i=0;i<k;i++)
    {
        if(m[a[i]]==0)
        {
            m[a[i]] = 1;
            C1++;
        }
        else
        {
            m[a[i]]++;
        }
    }
    C2 = C1;
    MAX = C2;
    for(i=k;i<n;i++)
    {
        if(m[a[i-k]]==1)
        {
            m.erase(a[i-k]);
            C2--;
        }
        else
        {
            m[a[i-k]]--;
        }
        if(m[a[i]]==0)
        {
            m[a[i]] = 1;
            C2++;
        }
        else
        {
            m[a[i]]++;
        }
        MAX = max(MAX, C2);
    }
    return MAX;
}

int main()
{
    fastt;
    ll k=5, A[10]={1, 1, 2, 3, 2, 5, 1, 1, 4, 1}, n=10, L;
    L = f(A, n, k);
    cout << L << endl;
    return 0;
}
