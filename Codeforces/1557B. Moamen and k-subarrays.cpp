#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k, i, p=1, x;
        cin >> n >> k;
        vll v, v2;
        map <ll, ll> m;
        for(i=0;i<n;i++)
        {
            cin >> x;
            v.pb(x);
            v2.pb(x);
        }
        sort(v2.begin(), v2.end());
        m[v2[0]]=-100000000000;
        for(i=1;i<v2.size();i++)
        {
            m[v2[i]]=v2[i-1];
        }
        for(i=1;i<v.size();i++)
        {
            if(v[i-1]!=m[v[i]])
            {
                p++;
            }
        }
        if(k>=p)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
