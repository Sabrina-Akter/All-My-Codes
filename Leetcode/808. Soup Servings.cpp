#include <bits/stdc++.h>
using namespace std;

    map<pair<int,int>,double> dp;
    double solve(int a, int b){
        if (a<=0 && b<=0) return 0.5;
        if (a<=0) return 1.0;
        if (b<=0) return 0.0;

        if (dp.find({a,b}) != dp.end()) return dp[{a,b}];

        double res = 0.25*(solve(a-100,b) + solve(a-75,b-25) + solve(a-50,b-50) + solve(a-25,b-75));
        dp[{a,b}] = res;
        return res;
    }
    double soupServings(int n) {
        if (n>5000) return 1.0;
        
        return solve(n,n);
    }

int main()
{
    int n;
    cin >> n;
    soupServings(n);
    return 0;
}