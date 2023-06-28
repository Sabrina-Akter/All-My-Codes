#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, k, i, j, sum=0;
    cin >> n >> k;
    ll A[n];
    for(i=0;i<n;i++)
    {
        cin >> A[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((A[i]+A[j])%k==0)
            {
                sum++;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
