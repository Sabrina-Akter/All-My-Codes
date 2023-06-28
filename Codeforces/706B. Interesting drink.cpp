#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, q, x, num;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> x;
        auto f = upper_bound(v.begin(), v.end(), x);
        num = (f)-v.begin();
        if(num==0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << num << endl;
        }
    }
    return 0;
}
