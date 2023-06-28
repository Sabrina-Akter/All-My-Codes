#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000

ll A[1000000];
ll B[1000000];
ll C[1000000];

ll dp[1000000][4];

ll f(ll i, ll n, ll v)
{
    cout << "i = " << i << " and v = " << v << endl;
    if(i==n)
    {
        return 0;
    }
    if(dp[i][v]!=-1)
    {
        return dp[i][v];
    }
    ll points;
    if(v==0)
    {
        points = max(max(C[i] + A[i+1] + f(i+1, n, 1), C[i] + B[i+1] + f(i+1, n, 2)), max(A[i] + B[i+1] + f(i+1, n, 2), A[i] + C[i+1] + f(i+1, n, 3)));
    }
    else if(v==1)
    {
        points = max(A[i] + B[i+1] + f(i+1, n, 2), A[i] + C[i+1] + f(i+1, n, 3));
    }
    else if(v==2)
    {
        points = max(B[i] + A[i+1] + f(i+1, n, 1), B[i] + C[i+1] + f(i+1, n, 3));
    }
    else if(v==3)
    {
        points = max(C[i] + A[i+1] + f(i+1, n, 1), C[i] + B[i+1] + f(i+1, n, 2));
    }
    return dp[i][v] = points;
}

int main()
{
    fastt;
    ll i, n, X, Y, Z;
    memset(dp,-1,sizeof(dp));
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> A[i] >> B[i] >> C[i];
    }
    cout << f(0, n, 0) << endl;
    return 0;
}
