#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int countHomogenous(string s) 
    {
        int MOD = 1e9 + 7;
        int sum = 0;
        int ans = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(i == 0 || s[i] == s[i-1]) sum++;
            else sum = 1;
            ans = (ans + sum) % MOD;
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}