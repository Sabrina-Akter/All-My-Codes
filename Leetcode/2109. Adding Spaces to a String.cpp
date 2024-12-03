#include <bits/stdc++.h>
using namespace std;

string addSpaces(string s, vector<int>& spaces) 
{
    string ans;
    int x = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(x < spaces.size() && spaces[x] == i)
        {
            ans += ' ';
            x++;
        }
        ans += s[i];
    }
    return ans;
}

int main()
{
    

    return 0;
}