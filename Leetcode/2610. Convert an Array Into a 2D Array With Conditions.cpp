#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<vector<int>> findMatrix(vector<int>& nums) 
    {
        map <int, int> freq;
        for(auto &num : nums)
        {
            freq[num]++;
        }
        vector <vector<int>> ans;
        while(1)
        {
            vector <int> temp;
            for(auto &it : freq)
            {
                if(it.second != 0)
                {
                    temp.push_back(it.first);
                    freq[it.first]--;
                }
            }
            if(temp.size() > 0) ans.push_back(temp);
            else break;
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}