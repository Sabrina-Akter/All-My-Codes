#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        multimap<string, string> m;
        vector<string> x;

        int i, f=0;
        for(i=0;i<strs.size();i++)
        {
            if(strs[i]=="")
            {
                f=1;
                x.push_back("");
            }
            else
            {
                string n = strs[i];
                sort(n.begin(), n.end());
                m.insert({n, strs[i]});
            }
        }
        if(f==1)
        {
            ans.push_back(x);
            x.clear();
        }
        string last="";
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it==m.begin())
            {
                x.push_back((*it).second);
            }
            else
            {
                if(last==(*it).first)
                {
                   x.push_back((*it).second); 
                }
                else
                {
                    ans.push_back(x);
                    x.clear();
                    x.push_back((*it).second);
                }
            }
            last = (*it).first;
        }
        if(x.size()!=0)
        {
            ans.push_back(x);
        }
        return ans;
    }

int main()
{
    vector <string> strs = {"", "", "ape","and","cat"};
    groupAnagrams(strs);
    return 0;
}