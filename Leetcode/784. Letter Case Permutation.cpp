#include <bits/stdc++.h>
using namespace std;

vector<string> ans;
map <string, int> m;
void func(string s, int i, string x)
{
    //base case
    if(i==s.size())
    {
        m[x]++;
        if(m[x]==1)
        {
            ans.push_back(x);
        }
        return;
    }
    //1
    x+=tolower(s[i]);
    func(s, i+1, x);
    x.pop_back();
    //2
    x+=toupper(s[i]);
    func(s, i+1, x);
    x.pop_back();
}

vector<string> letterCasePermutation(string s) {
        string x;
        func(s, 0, x);
        return ans;   
    }

int main()
{
    string s = "a1b2";
    letterCasePermutation(s);
    return 0;
}