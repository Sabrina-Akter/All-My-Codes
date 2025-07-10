class Solution 
{
  public:
    string longestString(vector<string> &words) 
    {
        unordered_map <string, int> mp;
        for(int i = 0; i < words.size(); i++)
        {
            mp[words[i]] = 1;
        }
        string temp;
        bool okay;
        vector <string> v;
        for(int i = 0; i < words.size(); i++)
        {
            temp = "";
            okay = true;
            for(int j = 0; j < words[i].size(); j++)
            {
                temp += words[i][j];
                if(mp.count(temp) == true) continue;
                else
                {
                   okay = false;
                   break;
                }
            }
            if(okay)
            {
                if(v.empty()) v.push_back(temp);
                else if(temp.size() >= v[v.size() - 1].size())
                {
                    if(temp.size() > v[v.size() - 1].size())
                    {
                        v.clear();
                    }
                    v.push_back(temp);
                }
            }
        }
        if(v.empty()) return "";
        return *min_element(v.begin(), v.end());
    }
};