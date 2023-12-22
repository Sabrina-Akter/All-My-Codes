#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int maxScore(string s) 
    {
       int one = 0;
       for(int i = 0; i < s.size(); i++) 
       {
            if(s[i] == '1') one++;
       }
       int temp_zero = 0, temp_one = 0, mx = 0;
       for(int i = 0; i < s.size() - 1; i++)
       {
            s[i] == '0' ? temp_zero++ : temp_one++;
            mx = max(mx, temp_zero + one - temp_one);
       }
       return mx;
    }
};

int main()
{
    

    return 0;
}