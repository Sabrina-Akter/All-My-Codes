#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part) {
    while(1)
    {
        string ans;
        int i, left, right;
        auto f = s.find(part);
        if(f!=string::npos)
        {
            left = f;
            right = part.size()+f-1;
            for(i=0;i<s.size();i++)
            {
                if(i>=left && i<=right)
                {
                    continue;
                }
                else
                {
                    ans+=s[i];
                }
            }
            s = ans;
        }
        else
        {
            cout << s << endl;
            return s;
        } 
    } 
    }

int main()
{
    string s = "axxxxyyyyb", part = "zz";
    removeOccurrences(s, part);
    return 0;
}