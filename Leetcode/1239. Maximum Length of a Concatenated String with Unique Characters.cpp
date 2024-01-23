#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    void f(vector<string>& arr, vector<string>& all, int i, string s)
    {
        if(i >= arr.size())
        {
            all.push_back(s);
        }
        else
        {
            f(arr, all, i + 1, s);
            if(s.size() + arr[i].size() <= 26) f(arr, all, i + 1, s + arr[i]);
        }
    }
    int maxLength(vector<string>& arr) 
    {
        vector <string> all;
        f(arr, all, 0, "");
        int mx = 0;
        for(auto &word : all)
        {
            unordered_map <char, int> freq;
            bool unique = true;
            int n = word.size();
            for(auto &c : word)
            {
                freq[c]++;
                if(freq[c] == 2) 
                {
                    unique = false;
                    break;
                }
            }
            if(unique == true) mx = max(mx, n);
        }
        return mx;
    }
};

int main()
{
    return 0;
}