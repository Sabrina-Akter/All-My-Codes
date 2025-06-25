class Solution 
{
  public:
    bool sameFreq(string& s) 
    {
       map <char, int> mp;
       for(int i = 0; i < s.size(); i++)
       {
           mp[s[i]]++;
       }
       
       map <int, int> cnt;
       for(auto &it : mp)
       {
           cnt[it.second]++;
       }
       
       if(cnt.size() == 1) return true;
       if(cnt.size() == 2)
       {
           auto it = cnt.begin();
           int x1 = it->first, x2 = it->second;
           it++;
           int y1 = it->first, y2 = it->second;
           if(x1 == 1 || y1 == 1) return true;
           if(x2 == 1 && x1 - 1 == y1) return true;
           if(y2 == 1 && y1 - 1 == x1) return true;
       }
       return false;
    }
};
