#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000

ll x1, y1, x2, y2, n, i, j, a, b, c;
set <pair<ll, ll>> m;
set <pair<ll, ll>> ::iterator it;

int main()
{
    fastt;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a >> b >> c;
        for(j=b;j<=c;j++)
        {
            m.insert(make_pair(a, j));
            //cout << "a = " << a << ", j = " << j << endl;
        }
    }
    for(it=m.begin();it!=m.end();++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
