#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll s, n, i, a, b, flag=0;
    cin >> s >> n;
    vector <pair<ll, ll> > v;
    for(i=0;i<n;i++)
    {
        cin >> a >> b;
        v.pb({a, b});
    }
    sort(v.begin(), v.end());
    for(i=0;i<v.size();i++)
    {
        a = v[i].first, b = v[i].second;
        if(a<s)
        {
            s+=b;
        }
        else
        {
            flag=1;
            cout << "NO" << endl;
            break;
        }
    }
    if(flag==0)
    {
        cout << "YES" << endl;
    }
    return 0;
}
