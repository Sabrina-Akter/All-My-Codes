#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, pos, ans=0;
    cin >> n;
    vll v1(n), v2(n), v3(n);
    for(i=0;i<n;i++)
    {
        cin >> v1[i];
    }
    for(i=0;i<n;i++)
    {
        cin >> v2[i];
        v3[i] = v1[i]-v2[i];
    }
    sort(v3.begin(), v3.end());
    for(i=0;i<n;i++)
    {
        if(v3[i]<=0)
        {
            continue;
        }
        else
        {
            ll pos = lower_bound(v3.begin(), v3.end(), (-v3[i]+1))-v3.begin();
            ans+=i-pos;
        }
    }
    cout << ans << endl;
    return 0;
}
