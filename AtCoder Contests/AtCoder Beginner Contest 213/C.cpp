#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i, r, c, n, x, y, a, b;
    cin >> r >> c >> n;
    vector <pair<ll, ll> > v;
    vll R, C;
    map <ll, ll> m1, m2;
    for(i=0;i<n;i++)
    {
        cin >> x >> y;
        v.pb({x,y});
        R.pb(x);
        C.pb(y);
    }
    sort(R.begin(), R.end());
    sort(C.begin(), C.end());
    a=1, b=1;
    for(i=0;i<R.size();i++)
    {
        if(i==0)
        {
            m1[R[i]]=a;
            m2[C[i]]=b;
        }
        else
        {
            if(R[i-1]<R[i])
            {
                a++;
                m1[R[i]]=a;
            }
            else if(R[i-1]==R[i])
            {
                m1[R[i]]=a;
            }
            if(C[i-1]<C[i])
            {
                b++;
                m2[C[i]]=b;
            }
            else if(C[i-1]==C[i])
            {
                m2[C[i]]=b;
            }
        }
    }
    for(i=0;i<v.size();i++)
    {
        cout << m1[v[i].first] << " " << m2[v[i].second] << endl;
    }
    return 0;
}
