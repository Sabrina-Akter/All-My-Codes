#include <bits/stdc++.h>
using namespace std;

int minChanges(string s) 
{
    int ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != s[i + 1]) ans++;
        i++;
    }
    return ans;
}

int main()
{
    

    return 0;
}