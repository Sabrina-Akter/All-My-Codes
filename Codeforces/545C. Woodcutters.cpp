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
    vector <pair<ll, ll> > v;
    ll n, i, x, y, last, x1, y1, x2, y2, sum=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x >> y;
        v.pb(make_pair(x, y));
    }
    for(i=0;i<n;i++)
    {
        x = v[i].first;
        y = v[i].second;
        if((i==0) || (i==n-1))
        {
            last = x;
        }
        else
        {
            //left
            x1 = x-y;
            y1 = x;
            //right
            x2 = x;
            y2 = x+y;
            if(last<x1)
            {
                last = y1;
            }
            else if(y2<(v[i+1].first))
            {
                last = y2;
            }
            else
            {
                last = x;
                sum++;
            }
        }
    }
    cout << n-sum << endl;
    return 0;
}
