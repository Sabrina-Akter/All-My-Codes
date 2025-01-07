#include <bits/stdc++.h>
using namespace std;

vector<string> stringMatching(vector<string>& words) 
{
    vector <string> ans;
    bool found;
    for(int i = 0; i < words.size(); i++)
    {
        found = false;
        for(int j = 0; j < words.size(); j++)
        {
            if(i != j)
            {
                if(words[j].find(words[i]) < words[j].size())
                {
                    found = true;
                    break;
                }
            }
        }
        if(found == true) ans.push_back(words[i]);
    }
    return ans;
}

int main()
{
    

    return 0;
}