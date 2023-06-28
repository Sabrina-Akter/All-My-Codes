#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
        s.push_back(' ');
        vector <string> v;
        int i, f=1;
        string ss = "", ans;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ' && f==0)
            {
                f=1;
                v.push_back(ss);
                ss="";
            }
            else if(s[i]==' ' && f==1)
            {
                continue;
            }
            else
            {
                ss+=s[i];
                f = 0;
            }
        }
        for(i=v.size()-1;i>=0;i--)
        {
            for(int j=0; j<v[i].size();j++)
            {
                ans.push_back(v[i][j]);
            }
            if(i!=0)
            {
                ans.push_back(' ');
            }
        }
        return ans;
    }

int main()
{
    string s = "a";
    reverseWords(s);
    return 0;
}