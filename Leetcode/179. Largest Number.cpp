#include <bits/stdc++.h>
using namespace std;

//TC = O(NlogN)
//SC = O(N)
class Solution 
{
public:
    static bool comp(string &str1, string &str2) 
    {
        return str2 + str1 < str1 + str2;
    }
    string largestNumber(vector<int>& nums) 
    {
        vector <string> str;
        for (auto &num : nums) str.push_back(to_string(num));
        sort(str.begin(), str.end(), comp); 

        if(str[0]=="0") return "0";

        string ans = "";
        for (auto &num : str) ans += num;
        return ans;        
    }
};

int main()
{
    

    return 0;
}