class Solution 
{
    public:
    int sumSubstrings(string &s) 
    {
        int ans = 0;
        string temp;
        for(int i = 0; i < s.size(); i++)
        {
            temp = "";
            for(int j = i; j < s.size(); j++)
            {
                temp += s[j];
                ans += stoi(temp);
            }
        }
        return ans;
    }
};