class Solution 
{
    public:
    vector<int> findGreater(vector<int>& arr) 
    {
        unordered_map <int, int> mp;
        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        vector <pair<int, int>> v;
        vector <int> ans;
        for(int i = 0; i < arr.size(); i++)
        {
            v.push_back({mp[arr[i]], arr[i]});
        }
        reverse(v.begin(), v.end());
        stack <pair<int, int>> st;
        for(int i = 0; i < v.size(); i++)
        {
            while(st.empty() == false)
            {
                if(st.top().first <= v[i].first) st.pop();
                else
                {
                    ans.push_back(st.top().second);
                    break;
                }
            }
            if(st.empty()) ans.push_back(-1);
            st.push({v[i].first, v[i].second});
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

