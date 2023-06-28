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
        ll n, k, i, x, zero, c;
        cin >> n >> k;
        ll A[n+5]={0};
        vll v[n+5], v2;
        map <ll, ll> m;
        for(i=0;i<n;i++)
        {
            cin >> x;
            m[x]++;
            v[x].pb(i);
        }
        for(auto it: m)
        {
            ll a=it.first, b=it.second;
            if(b>=k)
            {
                c=0;
                for(i=0;i<k;i++)
                {
                    c++;
                    A[v[a][i]] = c;
                }
            }
            else
            {
                for(i=0;i<v[a].size();i++)
                {
                    v2.pb(v[a][i]);
                }
            }
        }
        zero = v2.size()%k;
        c=0;
        for(i=0;i<v2.size()-zero;i++)
        {
            c++;
            A[v2[i]] = c;
            if(c==k)
            {
                c=0;
            }
        }
        for(i=0;i<n;i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
