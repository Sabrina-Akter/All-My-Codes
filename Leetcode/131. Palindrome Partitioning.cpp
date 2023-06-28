#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> ans, test;

void func(string s, int i, string x, vector<string>&v)
{
    //base
    if(i==s.size())
    {
        if(x.empty())
        {
            test.push_back(v);
        }
        return;
    }
    //1
    x+=s[i];
    v.push_back(x);
    func(s, i+1, "", v);
    v.pop_back();
    //2
    func(s, i+1, x, v);
}

vector<vector<string>> partition(string s) {
        vector <string> v;
        func(s, 0, "", v); 
        int i, j, f;
        for(i=0;i<test.size();i++) 
        {
            f=0;
            for(j=0;j<test[i].size();j++)
            {
                string x = test[i][j], y=x;
                reverse(y.begin(),y.end());
                if(x!=y)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                ans.push_back(test[i]);
            }
        } 
        for(i=0;i<ans.size();i++) 
        {
            for(j=0;j<ans[i].size();j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
        return ans;
    }

int main()
{
    string s = "aab";
    partition(s);
    return 0;
}