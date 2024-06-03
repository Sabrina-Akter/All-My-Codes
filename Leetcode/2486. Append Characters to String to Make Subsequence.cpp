#include <bits/stdc++.h>
using namespace std;

int appendCharacters(string s, string t) 
{
    int x = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(t[x] == s[i])
        {
            x++;
        }
        if(x == t.size()) return 0;
    }
    return t.size() - x;
}

int main()
{
    

    return 0;
}