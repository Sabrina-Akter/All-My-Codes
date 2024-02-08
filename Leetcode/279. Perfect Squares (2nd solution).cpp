#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    void f(int n, vector <int> &all_sqr, unordered_map <int, int> &sqr, int sum, int &ans)
    {
        if(n == 0)
        {
            ans = min(ans, sum);
        }
        else
        {
            for(int i = 0; i < all_sqr.size(); i++)
            {
                if(all_sqr[i] <= n)
                {
                    int div = n / all_sqr[i];
                    int rem = n % all_sqr[i];
                    int prod = div * all_sqr[i];
                    if(sum + div < ans)
                    {
                        f(n - prod, all_sqr, sqr, sum + div, ans);
                    }
                }
            }
        }
    }
    int numSquares(int n) 
    {
        vector <int> all_sqr;
        unordered_map <int, int> sqr;
        for(int i = 1; i * i <= 10000; i++)
        {
            all_sqr.push_back(i * i);
            sqr[i * i] = 1;
        }
        reverse(all_sqr.begin(), all_sqr.end());
        int ans = INT_MAX;
        f(n, all_sqr, sqr, 0, ans);
        return ans;
    }
};

int main()
{
    

    return 0;
}