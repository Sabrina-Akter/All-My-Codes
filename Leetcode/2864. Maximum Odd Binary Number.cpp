#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string maximumOddBinaryNumber(string s) 
    {
        int n = s.size();
        int one = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1') one++;
        }
        one--;
        string ans;
        for(int i = 0; i < n; i++)
        {
            if(one > 0)
            {
                ans += '1';
                one--;
            }
            else
            {
                ans += '0';
            }
        }
        ans[n - 1] = '1';
        return ans;
    }
};

int main()
{
    

    return 0;
}