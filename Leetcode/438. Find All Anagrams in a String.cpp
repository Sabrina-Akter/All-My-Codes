#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector <int> ans;
    string x;
    sort(p.begin(), p.end());
    int i;
    for(i=0;i<s.size();i++)
    {
        if((i+1)<p.size())
        {
            x+=s[i];
        }
        else if((i+1)==p.size())
        {
            x+=s[i];
            string y = x;
            sort(y.begin(), y.end());
            if(y==p)
            {
                ans.push_back(i);
            }
        }
        else if((i+1)>p.size())
        {
            x = x.substr(1);
            x+=s[i];
            string y = x;
            sort(y.begin(), y.end());
            if(y==p)
            {
                ans.push_back(i);
            }
        }
        cout << x << endl;
    }
    for(i=0;i<ans.size();i++)
    {
        cout << ans[i] << endl;
    }
    return ans;   
    }

int main()
{
    string s = "cbaebabacd", p = "abc";
    findAnagrams(s, p);
    return 0;
}