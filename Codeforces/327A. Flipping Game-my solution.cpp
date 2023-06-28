#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, j, num, Max=0;
    cin >> n;
    ll A[200]={0}, sum_1[200]={0}, sum_0[200]={0}, sum=0;
    for(i=1;i<=n;i++)
    {
        cin >> A[i];
        sum+=A[i];
        sum_1[i]=sum_1[i-1]+A[i];
        if(A[i]==0)
        {
            sum_0[i]=sum_0[i-1]+1;
        }
        else
        {
            sum_0[i]=sum_0[i-1];
        }
    }
    if(sum==n)
    {
        cout << n-1 << endl;
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            for(j=i; j<=n; j++)
            {
                num = sum_1[i-1]+(sum_0[j]-sum_0[i-1])+(sum_1[n]-sum_1[j-1]);
                Max = max(num, Max);
            }
        }
        cout << Max << endl;
    }
    return 0;
}
