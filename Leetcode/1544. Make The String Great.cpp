#include <bits/stdc++.h>
using namespace std;


string makeGood(string s) 
{
    string ans;
    for(int i = 0; i < s.size(); i++)
    {
        if(i == 0) ans += s[i];
        else
        {
            if((ans.size() > 0) && ((isupper(s[i]) && tolower(s[i]) == ans.back()) || (islower(s[i]) && toupper(s[i]) == ans.back())))
            {
                ans.pop_back();
            }
            else
            {
                ans += s[i];
            }
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}