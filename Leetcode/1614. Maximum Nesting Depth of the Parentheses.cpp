#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s) 
{
    int cnt = 0;
    int mx = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            cnt++;
        }
        else if(s[i] == ')')
        {
            cnt--;
        }
        mx = max(mx, cnt);
    }
    return mx;
}

int main()
{
    

    return 0;
}