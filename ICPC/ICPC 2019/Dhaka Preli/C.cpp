#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t,a,b,c,d,i,j,x,sum;
    cin >> t;
    while(t--)
    {
        ll n,sum=0;
        cin >> n;
        vll v1[n+2], v2[70], v3;
        for(i=0;i<n;i++)
        {
            cin >> a >> b >> c >> d;
            v1[a].pb(b);
            v1[a].pb(c);
            v1[a].pb(d);
            for(j=0;j<d;j++)
            {
                cin >> x;
                v2[d].pb(x);
            }
        }
        for(i=0;i<n;i++)
        {
            cin >> x;
            v3.pb(x);
        }
        for(i=v3.size()-1;i>=0;i--)
        {
            if(v1[i][1]<v1[i-1][1])
            {
                sum++;
            }
            else if(v1[i][1]==v1[i-1][1])
        }
    }
    return 0;
}
