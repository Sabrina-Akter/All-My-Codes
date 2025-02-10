#include <bits/stdc++.h>
using namespace std;

string clearDigits(string s) 
{
    map <int, int> mp;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            for(int j = i - 1; j >= 0; j--)
            {
                if((s[j] >= 'a' && s[j] <= 'z') && (mp[j] == 0))
                {
                    mp[i] = 1;
                    mp[j] = 1;
                    break;
                }
            }
        }
    }
    string ans;
    for(int i = 0; i < s.size(); i++)
    {
        if(mp[i] == 0) ans += s[i];
    }
    return ans;
}

int main()
{
    

    return 0;
}