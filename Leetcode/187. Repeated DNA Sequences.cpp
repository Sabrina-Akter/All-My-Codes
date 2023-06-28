#include <bits/stdc++.h>
using namespace std;

vector<string> findRepeatedDnaSequences(string s) {
        int i;
        string x;
        unordered_map <string, int> m;
        vector <string> ans;
        for(i=0;i<s.size();i++)
        {
            if(i+1<10)
            {
                x+=s[i];
            }
            else if(i+1==10)
            {
                x+=s[i];
                m[x]++;
            }
            else if(i+1>10)
            {
                x.erase(0, 1);
                x+=s[i];
                m[x]++;
                if(m[x]==2)
                {
                    ans.push_back(x);
                }
            }
        }
        return ans;
    }

int main()
{
    string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    findRepeatedDnaSequences(s);
    return 0;
}