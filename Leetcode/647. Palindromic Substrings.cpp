#include <bits/stdc++.h>
using namespace std;

int countSubstrings(string s) {
       string x, y;
       int i, j, cnt=0;
       for(i=0;i<s.size();i++)
       {
            x+=s[i];
            y = x;
            reverse(y.begin(), y.end());
            if(x==y)
            {
                cnt++;
            }
            for(j=i+1;j<s.size();j++)
            {
                x+=s[j];
                y = x;
                reverse(y.begin(), y.end());
                if(x==y)
                {
                    cnt++;
                }
            }
            x = "";
       }
       return cnt;
    }

int main()
{
    string s = "abc";
    countSubstrings(s);

    return 0;
}