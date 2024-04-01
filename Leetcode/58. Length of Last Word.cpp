#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int lengthOfLastWord(string s) 
    {
        s += ' ';
        string temp;
        int ans = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(temp != "" && s[i] == ' ')
            {
                ans = temp.size();
                temp = "";
            }
            else if(s[i] != ' ')
            {
                temp += s[i];
            }
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}