class Solution 
{
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) 
    {
        sort(b.begin(), b.end());
        vector <int> ans;
        for(int i = 0; i < a.size(); i++)
        {
            auto it = upper_bound(b.begin(), b.end(), a[i]);
            it--;
            ans.push_back(it - b.begin() + 1);
        }
        return ans;
    }
};
