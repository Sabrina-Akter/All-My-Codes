#include <bits/stdc++.h>
using namespace std;

bool checkValidString(string s) {
        deque <char> d;
        int i, star = 0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                d.push_back('(');
            }
            else if(s[i]=='*')
            {
                star++;
            }
            else if(s[i]==')')
            {
                if(d.empty()==0)
                {
                    d.pop_back();
                }
                else
                {
                    if(star>=1)
                    {
                        
                    }
                }
            }
        }
        return true;
    }

int main()
{
    string s = "**";
    checkValidString(s);
    return 0;
}