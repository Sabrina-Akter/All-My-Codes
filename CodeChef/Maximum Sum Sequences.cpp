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
        ll n, i, sum=0, M=-1000000, ans=0;
        cin >> n;
        ll A[n];
        for(i=0;i<n;i++)
        {
            cin >> A[i];
            sum+=A[i];
            M=max(M, sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        unordered_map <ll, ll> m;
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=A[i];
            if(sum==M)
            {
                ans++;
            }
            if(m.find(sum-M)!=m.end())
            {
                ans+=m[sum-M];
            }
            m[sum]++;
        }
        cout << M << " " << ans << endl;
    }
    return 0;
}

