#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, mx, mn, dif;
    cin >> n;
    vll v(n);
    map <ll,ll> m;
    for(i=0;i<n;i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    mx = *max_element(v.begin(), v.end());
    mn = *min_element(v.begin(), v.end());
    dif = mx-mn;
    if(mx==mn)
    {
        n = ((m[mx])*(m[mx]-1))/2;
    }
    else
    {
        n = m[mx]*m[mn];
    }
    cout << dif << " " << n << endl;
    return 0;
}
