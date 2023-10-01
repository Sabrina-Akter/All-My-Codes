#include <bits/stdc++.h>
using namespace std;

    string reverseWords(string s) {
        s+=' ';
        vector <string> v;
        string ans, temp;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                v.push_back(temp);
                temp = "";
            }
            else
            {
                temp+=s[i];
            }
        }
        for(i=0;i<v.size();i++)
        {
            reverse(v[i].begin(), v[i].end());
            ans+=v[i];
            if(i!=v.size()-1)
            {
                ans+=' ';
            }
        }
        return ans;
    }

int main()
{
    string s;
    cin >> s;
    reverseWords(s);

    return 0;
}