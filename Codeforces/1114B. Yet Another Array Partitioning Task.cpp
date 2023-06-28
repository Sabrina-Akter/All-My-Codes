#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, m, k, i, sum=0, stop=0, num=0;
    cin >> n >> m >> k;
    vll v1(n), v2(n);
    map <ll, ll> mp;
    for(i=0;i<n;i++)
    {
        cin >> v1[i];
        v2[i]=v1[i];
    }
    sort(v2.begin(), v2.end(), greater<ll>());
    for(i=0;i<(m*k);i++)
    {
        mp[v2[i]]++;
        sum+=v2[i];
    }
    cout << sum << endl;
    for(i=0;i<n;i++)
    {
        if(mp[v1[i]]>0)
        {
            num++;
            mp[v1[i]]--;
        }
        if(num==m)
        {
            cout << i+1 << " ";
            num=0;
            stop++;
        }
        if(stop==k-1)
        {
            break;
        }
    }
    return 0;
}
