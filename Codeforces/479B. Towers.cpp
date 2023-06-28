#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

vector <pair<ll, ll> > v;
vector <pair<ll, ll> > p;
int main()
{
    fastt;
    ll n, k, i, a, sum=0, last_a=-1, last_b=-2;
    cin >> n >> k;
    for(i=1;i<=n;i++)
    {
        cin >> a;
        v.pb({a, i});
    }
    sort(v.begin(),v.end());
    while(1)
    {
        if((v[0].first==v[v.size()-1].first) || (sum==k))
        {
            break;
        }
        else if((last_a==v[0].first)&&(last_b==v[v.size()-1].first))
        {
            sum--;
            p.pop_back();
            break;
        }
        else
        {
            sum++;
            p.pb({v[v.size()-1].second, v[0].second});
            (v[0].first)++;
            (v[v.size()-1].first)--;
            last_a=v[v.size()-1].first, last_b=v[0].first;
            sort(v.begin(), v.end());
        }
    }
    cout << v[v.size()-1].first-v[0].first << " " << sum << endl;
    for(i=0;i<p.size();i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
    return 0;
}
