#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

int main()
{
    fastt;
    ll a, b, x, y, i, j;
    cin >> a >> b >> x >> y;
    vector <pair<ll, ll> > v;
    ll B[b];
    for(j=0;j<b;j++)
    {
        v.pb(make_pair(0,0));
    }
    char A[1010][1010];
    char c;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin >> c;
            A[i][j] = c;
            if(c=='.')
            {
                v[j].first=v[j].first+1;
            }
            else if(c=='#')
            {
                v[j].second=v[j].second+1;
            }
        }
    }
    for(j=0;j<b;j++)
    {
        cout << "v[" << j << "].first = " << v[j].first << " v[" << j << "].second = " << v[j].second << endl;
        if(v[j].first>v[j].second)
        {
            B[j] = 0;
        }
        else if(v[j].first<v[j].second)
        {
            B[j] = 1;
        }
        else if(v[j].first==v[j].second)
        {
            B[j] = 2;
        }
    }
    for(j=0;j<b;j++)
    {
        cout << B[j] << " ";
    }
    return 0;
}
