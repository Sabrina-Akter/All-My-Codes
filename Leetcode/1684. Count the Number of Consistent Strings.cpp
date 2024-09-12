#include <bits/stdc++.h>
using namespace std;

int countConsistentStrings(string allowed, vector<string>& words) 
{
    unordered_map <char, int> letters;
    for(int i = 0; i < allowed.size(); i++) letters[allowed[i]] = 1;
    int ans = 0;
    for(int i = 0; i < words.size(); i++)
    {
        bool ok = true;
        for(int j = 0; j < words[i].size(); j++)
        {
            char c = words[i][j];
            if(letters[c] == 0) 
            {
                ok = false;
                break;
            }
        }
        if(ok) ans++;
    }
    return ans;
}

int main()
{
    

    return 0;
}