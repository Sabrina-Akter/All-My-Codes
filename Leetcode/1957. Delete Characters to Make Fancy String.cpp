#include <bits/stdc++.h>
using namespace std;

string makeFancyString(string s) 
{
    string ans;
    for(int i = 0; i < s.size(); i++)
    {
        int size = ans.size();
        if(i > 1)
        {
            if(ans[size - 1] == s[i] && ans[size - 2] == s[i]) continue;
            else ans += s[i];
        }
        else ans += s[i];
    }
    return ans; 
}

int main()
{
    

    return 0;
}