#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000


int main()
{
    fastt;
    vector <pair<ll, ll> > v;
    ll n, i, j, a, b, sum=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a >> b;
        v.pb(make_pair(a,b));
    }
    for(i=0;i<v.size();i++)
    {
        a=v[i].first;
        for(j=0;j<v.size();j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                b = v[j].second;
                if(a==b)
                {
                    sum++;
                    break;
                }
            }
        }
    }
    cout << n-sum << endl;
    return 0;
}
