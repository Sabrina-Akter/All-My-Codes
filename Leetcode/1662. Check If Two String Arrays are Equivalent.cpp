#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string makeString(vector <string> &str)
    {
        string ans;
        for(auto word : str)
        {
            ans.append(word);
        }
        return ans;
    }

    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string str1 = makeString(word1);
        string str2 = makeString(word2);
        return str1 == str2;
    }
};

int main()
{
    

    return 0;
}