#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal) 
{
    if(s.size() != goal.size()) return false;
    int x, y, cnt;
    for(int i = 0; i < goal.size(); i++)
    {
        x = 0, y = i, cnt = 0;
        if(s[x] == goal[y])
        {
            cnt++;
            while(x < s.size())
            {
                x++;
                y++;
                if(y == goal.size()) y = 0;
                if(s[x] == goal[y]) cnt++;
                else break;
                if(cnt == goal.size()) return true;
            }
            if(cnt == goal.size()) return true;
        }
    }
    return false;
}

int main()
{
    

    return 0;
}