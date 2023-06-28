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
    ll p, q, l, r, i, j, k, a, b, sum=0, changes=0, A, B;
    cin >> p >> q >> l >> r;
    vector <pair<ll, ll> > v1, v2;
    for(i=0;i<p;i++)
    {
        cin >> a >> b;
        v1.push_back(make_pair(a, b));
    }
    for(i=0;i<q;i++)
    {
        cin >> a >> b;
        v2.push_back(make_pair(a,b));
    }
    for(i=l;i<=r;i++)
    {
        changes = 0;
        for(j=0;j<v2.size();j++)
        {
            A = v2[j].first + i;
            B = v2[j].second + i;
            for(k=0;k<v1.size();k++)
            {
                if((v1[k].first>=A && v1[k].first<=B) || (v1[k].second>=A && v1[k].second<=B))
                {
                    changes = 1;
                }
                if((A>=v1[k].first && A<=v1[k].second) || (B>=v1[k].first && B<=v1[k].second))
                {
                    changes = 1;
                }
            }
        }
        if(changes==1)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
