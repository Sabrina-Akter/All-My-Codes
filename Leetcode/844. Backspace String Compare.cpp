#include <bits/stdc++.h>
using namespace std;

    bool backspaceCompare(string s, string t) {
        string a, b;
        int i, s1 = s.size(), s2 = t.size();
        for(i=0;i<s1;i++)
        {
            if(s[i]=='#')
            {
                if(a.size()>0)
                {
                    a.pop_back();
                }
            }
            else
            {
                a.push_back(s[i]);
            }
        }
        for(i=0;i<s2;i++)
        {
            if(t[i]=='#')
            {
                if(b.size()>0)
                {
                    b.pop_back();
                }
            }
            else
            {
                b.push_back(t[i]);
            }
        }

        if(a==b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

int main()
{
    

    return 0;
}