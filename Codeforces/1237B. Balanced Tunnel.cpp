#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, x, MAX=0, last=0, ans=0;
    cin >> n;
    ll A[n+5]={0};
    vll v;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.pb(x);

    }
    for(i=0;i<n;i++)
    {
        cin >> x;
        A[x]=i+1;
    }
    for(i=0;i<v.size();i++)
    {
        MAX = max(MAX, last);
        if(A[v[i]]<MAX)
        {
            ans++;
        }
        last = A[v[i]];
    }
    cout << ans << endl;
    return 0;
}
