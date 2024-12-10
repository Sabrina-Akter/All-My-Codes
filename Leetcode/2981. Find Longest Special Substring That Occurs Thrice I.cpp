#include <bits/stdc++.h>
using namespace std;

int maximumLength(string s) 
{
    unordered_map <string, int> sp;
    string temp;
    for(int i = 0; i < s.size(); i++)
    {
        if((i == 0) || (s[i] == s[i - 1])) temp += s[i];
        else temp = s[i];
        sp[temp];
    }
    int mx = -1;
    for(auto &it : sp)
    {
        temp = it.first;
        int cnt = 0;
        auto pos = 0;
        while ((pos = s.find(temp, pos)) != string::npos) 
        {
            cnt++;
            pos++;
        }        
        if(cnt >= 3) mx = max(mx, (int)temp.size());
    }
    return mx;
}

int main()
{
    

    return 0;
}