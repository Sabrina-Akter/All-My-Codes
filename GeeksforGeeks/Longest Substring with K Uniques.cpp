class Solution 
{
    public:
    int longestKSubstr(string &s, int k) 
    {
        int mx = -1, last = 0;
        map <char, int> mp;
        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            while(mp.size() == k + 1)
            {
                mp[s[last]]--;
                if(mp[s[last]] == 0) mp.erase(s[last]);
                last++;
            }
            if(mp.size() == k) mx = max(mx, i - last + 1);
        }
        return mx;        
    }
};
