#include <bits/stdc++.h>
using namespace std;

int minAddToMakeValid(string s) {
        deque <char> d;
        int i, cnt = 0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                d.push_back('(');
            }
            else if(s[i]==')')
            {
                if(d.empty())
                {
                    cnt++;
                }
                else
                {
                    d.pop_back();
                }
            }
        }
        cnt+=d.size();
        return cnt;
    }

int main()
{
    string s = ")))()))(()";
    minAddToMakeValid(s);
    return 0;
}