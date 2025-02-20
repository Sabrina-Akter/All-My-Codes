#include <bits/stdc++.h>
using namespace std;

bool f(string s, int n, unordered_map<string, int> &found, string &ans) 
{
    if(s.size() == n) 
    {   
        if(found[s] == 0) 
        {
            ans = s;
            return true;  
        }
        return false;
    }
    
    s.push_back('0');
    if(f(s, n, found, ans)) return true;  
    
    s.back() = '1';  
    if(f(s, n, found, ans)) return true;  
    
    s.pop_back(); 
    return false;
}

string findDifferentBinaryString(vector<string>& nums) 
{
    unordered_map<string, int> found;
    for(string &s : nums) found[s] = 1;
    string ans;
    f("", nums.size(), found, ans);
    return ans;
}

int main()
{
    return 0;
}