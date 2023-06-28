#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

vll v(3);

int main()
{
    fastt;
    ll x, y, z;
    cin >> x >> y >> z;
    v[0]=x, v[1]=y, v[2]=z;
    sort(v.begin(), v.end());
    cout << v[2]+v[1] << endl;
    return 0;
}
