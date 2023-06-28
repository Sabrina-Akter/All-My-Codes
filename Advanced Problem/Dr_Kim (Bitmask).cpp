#include <bits/stdc++.h>
#define INF 2147483647
using namespace std;

int dp[15][(1<<12) + 1];
int x[15], y[15], n;

bool check(int mask, int pos) { return (bool) (mask & (1 << pos)); }
int Set(int mask, int pos){return mask = mask | (1<<pos);}

int abs(int x)
{
    if(x < 0)
        x *= -1;
    return x;
}

int solve(int pos, int mask)
{
    if(mask == ((1 << n) - 1)){
        return abs(x[pos] - x[n+1]) + abs(y[pos] - y[n+1]);
    }
    if(dp[pos][mask] != -1)
        return dp[pos][mask];

    int ret = INF;
    for(int i = 0; i < n; i++){
        if(!check(mask, i)){
            ret = min(ret, abs(x[pos] - x[i+1]) + abs(y[pos] - y[i+1]) + solve(i + 1, Set(mask, i)));
        }
    }

    return dp[pos][mask] = ret;
}

int main()
{
    cin>>n;

    cin>>x[0]>>y[0];
    cin>>x[n+1]>>y[n+1];

    for(int i = 1; i <= n; i++){
        cin>>x[i]>>y[i];
    }

    memset(dp, -1, sizeof(dp));
    int res = solve(0, 0);

    cout<<res<<endl;
}
