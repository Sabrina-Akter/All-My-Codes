#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, q, c=0;
    while(cin >> n >> q)
    {
        if(n==0 && q==0)
        {
            break;
        }
        c++;
        ll i, x;
        vll v;
        map<ll,ll> m;
        for(i=1;i<=n;i++)
        {
            cin >> x;
            m[x]=1;
            v.pb(x);
        }
        sort(v.begin(), v.end());
        cout << "CASE# " << c << ":" << endl;
        for(i=0;i<q;i++)
        {
            cin >> x;
            if(m[x]==0)
            {
                cout << x << " not found" << endl;
            }
            else
            {
                vll::iterator p;
                p = lower_bound(v.begin(), v.end(), x);
                cout << x << " found at " << (p-v.begin())+1 << endl;
            }
        }
    }
    return 0;
}
