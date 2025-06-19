class Solution 
{
public:
    string caseSort(string& s) 
    {
        map <char, int> mp1, mp2;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z') mp1[s[i]]++;
            else mp2[s[i]]++;
        }
        string ans;
        char c;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                c = mp1.begin()->first;
                ans += c;
                mp1[c]--;
                if(mp1[c] == 0) mp1.erase(c);
            }
            else
            {
                c = mp2.begin()->first;
                ans += c;
                mp2[c]--;
                if(mp2[c] == 0) mp2.erase(c);               
            }
        }
        return ans;
    }
};
