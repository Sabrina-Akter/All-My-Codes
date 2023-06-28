class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> m;
        vector <int> v;
        int i;
        for(i=0;i<nums.size();i++)
        {
            int n = target-nums[i];
            if(m.find(n)!=m.end())
            {
                v.push_back(i);
                v.push_back(m[n]);
                return v;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};