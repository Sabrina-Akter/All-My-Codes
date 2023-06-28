#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i, j, n, ans=0;
    cin >> n;
    ll A[1010], sum[1010];
    for(i=1;i<=n;i++)
    {
        cin >> A[i];
        sum[i] = sum[i-1]+A[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            ans=max(sum[n]+j-i+1-2*(sum[j]-sum[i-1]),ans);
        }
    }
    cout << ans << endl;
    return 0;
}
