#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, sum=0, ans=0, x, d, m;
    cin >> n;
    ll A[n+2]={0};
    for(i=1;i<=n;i++)
    {
        cin >> x;
        sum+=x;
        A[i]=sum;
    }
    cin >> d >> m;
    for(i=m;i<=n;i++)
    {
        if(A[i]-A[i-m]==d)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
