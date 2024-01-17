#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map <int, int> freq, unique;
        for(auto &num : arr)
        {
            freq[num]++;
        }
        for(auto &it : freq)
        {
            if(unique.count(it.second) == true) return false;
            unique[it.second] = 1;
        }
        return true;
    }
};

int main()
{
    

    return 0;
}