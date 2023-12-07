#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string largestOddNumber(string num) 
    {
        unordered_set <char> odd = {'1', '3', '5', '7', '9'};
        bool odd_found = false;
        string ans;
        for(int i = num.size() - 1; i >= 0; i--)
        {
            if(odd.count(num[i]) == true) odd_found = true;
            if(odd_found == true) ans += num[i];
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    

    return 0;
}