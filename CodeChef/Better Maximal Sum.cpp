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
        ll n, i;
        cin >> n;
        ll A[n+2], L[n+2], R[n+2], sum=0, Max= -10000000000;
        for(i=0;i<n;i++)
        {
            cin >> A[i];
            sum+=A[i];
            Max=max(sum, Max);
            L[i] = sum;
            if(sum<0)
            {
                sum=0;
            }
        }
        sum=0;
        for(i=n-1;i>=0;i--)
        {
            sum+=A[i];
            R[i] = sum;
            if(sum<0)
            {
                sum=0;
            }
        }
        for(i=0;i<n;i++)
        {
            sum=0;
            if(i-1>=0)
            {
                sum+=L[i-1];
            }
            if(i+1<n)
            {
                sum+=R[i+1];
            }
            Max=max(Max,sum);
        }
        cout << Max << endl;
    }
    return 0;
}
