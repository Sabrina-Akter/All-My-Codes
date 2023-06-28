#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k, i, j, mx=-10000000000, cnt, ans;
        cin >> n >> k;
        ll A[n+1];
        for(i=1;i<=n;i++)
        {
            cin >> A[i];
        }
        for(i=n;i>=1;i--)
        {
            cnt=0;
            for(j=i-1;j>=1;j--)
            {
                ans = (i*j)-(k*(A[i]|A[j]));
                mx=max(ans,mx);
                cnt++;
                if(cnt>100)break;
            }
        }
        cout << mx << endl;
    }
    return 0;
}
