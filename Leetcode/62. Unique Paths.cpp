#include <bits/stdc++.h>
using namespace std;

int DP[110][110];

int dp(int a, int b, int m, int n)
{
    if(a==m-1 || b==n-1)
    {
        DP[a][b]=1;
        return 1;
    }
    else if(DP[a][b]!=0)
    {
        return DP[a][b];
    }
    else
    {
        return DP[a][b] = dp(a+1, b, m, n) + dp(a, b+1, m, n);
    }
}

int uniquePaths(int m, int n) {
        dp(0, 0, m, n);
        cout << DP[0][0] << endl;
        return DP[0][0];
    }

int main()
{
    int m = 80, n = 20;
    uniquePaths(m, n);
    return 0;
}