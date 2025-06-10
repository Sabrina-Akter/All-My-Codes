class Solution 
{
    public:
    int countStrings(string &s) 
    {
        vector <int> freq(26);
        int ans = 0;
        bool yes = false;
        for(int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
            if(freq[s[i] - 'a'] > 1) yes = true;
            ans += ((i + 1) - freq[s[i] - 'a']);
        }
        if(yes) ans++;
        return ans;
    }
};
